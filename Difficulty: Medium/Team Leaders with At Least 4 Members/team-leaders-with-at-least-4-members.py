import pandas as pd

class Solution:
    def teamLeaders(self, employee: pd.DataFrame) -> pd.DataFrame:
        # Group by leaderId and count direct reports
        leader_counts = employee.groupby('leaderId').size().reset_index(name='report_count')

        # Filter for team leaders with at least 4 reports
        valid_leaders = leader_counts[leader_counts['report_count'] >= 4]

        # Merge with the employee DataFrame to get the leader names
        result = employee.merge(valid_leaders, left_on='id', right_on='leaderId')

        # Return a DataFrame containing only the name column
        return result[['name']]