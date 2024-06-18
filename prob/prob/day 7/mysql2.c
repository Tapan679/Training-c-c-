DESC items;
SELECT * FROM items;
CREATE TABLE items (
    id INTEGER primary key auto_increment,
    nmae VARCHAR(512) not null,
    price FLOAT not null DEFAULT(0.0),
    item_size VARCHAR(50) not null,
    description VARCHAR(1024) not null
);
INSERT INTO items(name, price, item_size, description)
value('coffee', 20.0, 'small', 'small coffee - premuim filter'),
     ('tea', 15.0, 'small', 'small tea'),
     ('coffee', 40.0, 'large','large coffee - premuim filter'),
     ('snack',18.0, 'small','small snacks');

     UPDATE items 
     price = 25.0
     WHERE name='tea' and item_size='small';