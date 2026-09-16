import pandas as pd


class Solution:

    def secondHighestSalary(self, employee: pd.DataFrame) -> pd.DataFrame:
        # Drop duplicate salaries to keep only distinct values
        unique_salaries = employee["salary"].drop_duplicates()

        # Check if there are fewer than 2 distinct salaries
        if len(unique_salaries) < 2:
            second_highest = None
        else:
            # Sort salaries descending and pick the 2nd highest (index 1)
            second_highest = unique_salaries.sort_values(ascending=False).iloc[
                1
            ]

        # Return as a DataFrame with the requested column name
        return pd.DataFrame({"SecondHighestSalary": [second_highest]})