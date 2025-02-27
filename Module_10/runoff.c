#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <math.h>

// Max voters and candidates
#define MAX_VOTERS 100
#define MAX_CANDIDATES 9

// preferences[i][j] is jth preference for voter i
static int preferences[MAX_VOTERS][MAX_CANDIDATES];

// Candidates have name, vote count, eliminated status
typedef struct
{
    string name;
    int votes;
    bool eliminated;
} candidate;

// Array of candidates
static candidate candidates[MAX_CANDIDATES];

// Numbers of voters and candidates
int voter_count = 0;
int candidate_count = 0;

// Function prototypes
bool vote(int voter, int rank, string name);
void tabulate(void);
bool print_winner(void);
int find_min(void);
bool is_tie(int min);
void eliminate(int min);

int main(int argc, string argv[])
{
    // Check for invalid usage
    if (argc < 2)
    {
        printf("Usage: runoff [candidate ...]\n");
        return 1;
    }

    // Populate array of candidates
    candidate_count = argc - 1;
    if (candidate_count > MAX_CANDIDATES)
    {
        printf("Maximum number of candidates is %i\n", MAX_CANDIDATES);
        return 2;
    }
    for (int i = 0; i < candidate_count; i++)
    {
        candidates[i].name = argv[i + 1]; // plus one, otherwise the function name will be the first candidate name
        candidates[i].votes = 0;
        candidates[i].eliminated = false;
    }

    voter_count = get_int("Number of voters: ");
    if (voter_count > MAX_VOTERS)
    {
        printf("Maximum number of voters is %i\n", MAX_VOTERS);
        return 3;
    }

    // Keep querying for votes
    for (int i = 0; i < voter_count; i++)
    {

        // Query for each rank
        for (int j = 0; j < candidate_count; j++)
        {
            string name = get_string("Rank %i: ", j + 1);

            // Record vote, unless it's invalid
            if (!vote(i, j, name))
            {
                printf("Invalid vote.\n");
                return 4;
            }
        }

        printf("\n");
    }

    // Keep holding runoffs until winner exists
    while (true)
    {
        // Calculate votes given remaining candidates
        tabulate();

        // Check if election has been won
        bool won = print_winner();
        if (won)
        {
            break;
        }

        // Eliminate last-place candidates
        int min = find_min();
        bool tie = is_tie(min);

        // If tie, everyone wins
        if (tie)
        {
            for (int i = 0; i < candidate_count; i++)
            {
                if (!candidates[i].eliminated)
                {
                    printf("%s\n", candidates[i].name);
                }
            }
            break;
        }

        // Eliminate anyone with minimum number of votes
        eliminate(min);

        // Reset vote counts back to zero
        for (int i = 0; i < candidate_count; i++)
        {
            candidates[i].votes = 0;
        }
    }
    return 0;
}

// Record preference if vote is valid
bool vote(int voter, int rank, string name)
{
    int name_counter = 0;
    // check if input is correct
    for (int candidate_name = 0; candidate_name < candidate_count; candidate_name++)
    {
        if (strcmp(name, candidates[candidate_name].name) == 0)
        {
            name_counter++;
        }
    }
    if (name_counter == 0)
    {
        return false;
    }
    
    // save index of candidate 
    for (int candidate_name = 0; candidate_name < candidate_count; candidate_name++)
    {
        if (strcmp(name, candidates[candidate_name].name) == 0)
        {
            //printf("%i", candidate_name);
            preferences[voter][rank] = candidate_name;//candidate index;
        }
    }
    return true;
}


// Tabulate votes for non-eliminated candidates
void tabulate(void)
{
    int index = 0;
    int counter_eliminated = 0;
    // TODO
    for(int voter = 0; voter < voter_count; voter++)
    {
        index = preferences[voter][counter_eliminated];
        //printf("voter %i: %i", voter = 1, index);
        if (candidates[index].eliminated == false)
        {
            candidates[index].votes++;
            break;
        }
        counter_eliminated++;
    }
    
    return;
}

// Print the winner of the election, if there is one
bool print_winner(void)
{
    // TODO
    
    // calc votes needed for more than 50%
    int votes_50 = round(voter_count / 2); 
    //printf("%i", votes_50);
    printf("%i", candidates[1].votes);
    
    
    for(int current_candidate = 0; current_candidate < candidate_count; candidate_count++)
    {
        if(candidates[current_candidate].eliminated == false)
        {
                if (candidates[current_candidate].votes >= votes_50)
                {
                    printf("%s", candidates[current_candidate].name);
                    return true;
                }
        }
    }
    return false;
}

// Return the minimum number of votes any remaining candidate has
int find_min(void)
{
    // TODO
    int min = 0;
    // loop through candidates
    for(int current_candidate = 0; current_candidate < candidate_count; candidate_count++)
    {
        // check if candidate is not eliminated
        if (candidates[current_candidate].eliminated == false)
        {
            // check if value is lowest 
            if (candidates[current_candidate].votes < candidates[current_candidate + 1].votes)
            {
                min = candidates[current_candidate].votes;
            }
            else if (candidates[current_candidate + 1].votes < candidates[current_candidate].votes)
            {
                min = candidates[current_candidate + 1].votes;
            }
            candidates[current_candidate].votes = min;
        }    
    }    
    printf("%i\n", min);
    return 0;
}

// Return true if the election is tied between all candidates, false otherwise
bool is_tie(int min)
{
    // TODO
    return false;
}

// Eliminate the candidate (or candidates) in last place
void eliminate(int min)
{
    // TODO
    return;
}