# Write your MySQL query statement below
    SELECT name as 'NAME', sum(transactions.amount) as 'BALANCE'
    FROM users
    JOIN transactions
    ON transactions.account = users.account
    GROUP BY transactions.account
    HAVING sum(transactions.amount) > 10000
    