<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta http-equiv="X-UA-Compatible" content="IE=edge">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Tables</title>
</head>
<body>
    <table border="5" id="table">
        <tr>
            <td>Column 1</td>
            <td>Column 2</td>
            <td>Column 3</td>
        </tr>
        <tr>
            <td rowspan="2">Row 1 cell 1</td>
            <td>Row 1 Cell 2</td>
            <td>Row 1 Cell 3</td>
        </tr>
        <tr>
            <td>Row 2 Cell 2</td>
            <td>Row 2 Cell 3</td>
        </tr>
        <tr>
            <td colspan="3">Row 3 cell 1</td>
            
        </tr>
    </table>
<br>
    <table border="2">
        <thead>
            <th>No.</th>
            <th>Full name</th>
            <th>Position</th>
            <th>Salary</th>
            <th>Type</th>
        </thead>
    
        <body>
            <tr>
              <td>1</td>
              <td>Bill Gates</td>
              <td>Microsoft</td>
              <td>$1000</td>
              <td rowspan="4">Company Founder</td>
            </tr>
            <tr>
              <td>2</td>
              <td>Steve Jobs</td>
              <td>Apple</td>
              <td>$1200</td>
            </tr>
            <tr>
              <td>3</td>
              <td>Larry page</td>
              <td>Google</td>
              <td>$1100</td>
            </tr>
            <tr>
              <td>4</td>
              <td>Mark Zuckerberg</td>
              <td>FB</td>
              <td>$1300</td>
            </tr>
        </body>
    
        <tfoot>
            <tr>
                <td colspan="3">Total Expense</td>
                <td>$4600</td>
            </tr>
        </tfoot>
        
    </table>
</body>
</html>
