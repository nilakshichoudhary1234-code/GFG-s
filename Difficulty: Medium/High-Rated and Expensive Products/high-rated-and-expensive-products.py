import pandas as pd


class Solution:

  def filterHighRatedExpensive(self, df: pd.DataFrame) -> pd.DataFrame:
    # Filter for products with rating >= 4.5, quantity > 0, and price >= 300
    filtered_df = df[
        (df["rating"] >= 4.5)
        & (df["quantity_in_stock"] > 0)
        & (df["price"] >= 300)
    ]

    # Select the requested columns
    return filtered_df[[
        "product_id",
        "product_name",
        "rating",
        "quantity_in_stock",
        "price",
    ]]