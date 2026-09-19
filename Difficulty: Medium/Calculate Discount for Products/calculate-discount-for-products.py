import pandas as pd


class Solution:

  def calculateDiscount(self, products: pd.DataFrame) -> pd.DataFrame:
    # Condition: product_id is even AND category starts with 'A'
    condition = (products["product_id"] % 2 == 0) & (
        products["category"].str.startswith("A")
    )

    # Assign discount based on condition
    products["discount"] = products["price"].where(condition, 0)

    # Sort by product_id in ascending order
    res = products.sort_values(by="product_id", ascending=True)

    # Return only product_id and discount columns
    return res[["product_id", "discount"]]