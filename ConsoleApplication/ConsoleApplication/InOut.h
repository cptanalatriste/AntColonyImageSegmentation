#define PROGRAM_IDENTIFIER "\nACO algorithms for the TSP\n"
#define LINE_BUF_LEN 100

extern long int try_counter;
extern long int maximum_independent_tries;
extern long int maximum_tours_one_try;
long int optimal_solution;

extern long int constructed_tours_counter;
extern long int iteration_counter;

extern long int best_solution_iteration;
extern long int restart_best_solution_iteration;
extern long int restart_iteration;
extern double branching_factor_parameter;
extern double average_branching_factor;
extern double branching_factor_on_best_solution;
extern double branching_factor_limit;

struct point *read_instance_file(const char *file_name);
void init_program(long int argc, char *argv[]);
void set_default_parameters();
void show_parameters(void);
void initialize_variables_for_trial(long int try_number);

double compute_lambda_branching_factor(double lambda_value);
void finish_trial(long int trial_number);
void is_tour_feasible(long int *tour);
void print_tour(long int *tour);
