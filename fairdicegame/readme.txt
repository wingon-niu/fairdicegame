
a: ׯ��
b: ���
c: �Ƽ���
d: �����Լ
e: dice��Լ
f: logs��Լ



# ��dice��Լ�˻�������Լ��˻���eosio.codeȨ�ޣ��Ӷ������ں�Լ�������ת��EOS�Ĳ���
cleos set account permission niueeeeeeeee active '{"threshold": 1,"keys": [{"key": "EOS6dfjMRaQjjaojewaMd75rjg6wBJQSj63EEVD6NwQmbyYqf2Uwm","weight": 1}],"accounts": [{"permission":{"actor":"niueeeeeeeee","permission":"eosio.code"},"weight":1}]}' owner -p niueeeeeeeee



server_seed=79dbf9216224361564e3a5329789c9df38e040d17a6f07268e497b2ced273bca
user_seed=0dbe75545049da0d031d5ba7fb5f0abfb030ab18

roll_under=71
server_seed_hash=ecf4847f95a3c07d4b9a50a48ad79cbb963d98efab9641984856bb3b7e649a1a
user_seed=0dbe75545049da0d031d5ba7fb5f0abfb030ab18
expiration=1539768115
referrer=niuccccccccc
sig=SIG_K1_KBB6i8im8zUSfesLSHo5589UcAxxhXbKJVPnwo3t6ygqGNErc5ZzYAh8ckss8nPRAk3zwwF7aRyua64oCYu7i7J11q8NRt

# ���ת�˵�dice��Լ������memo
cleos push action eosio.token transfer '[ "niubbbbbbbbb", "niueeeeeeeee", "1.0000 SYS", "71-ecf4847f95a3c07d4b9a50a48ad79cbb963d98efab9641984856bb3b7e649a1a-0dbe75545049da0d031d5ba7fb5f0abfb030ab18-1539768115-niuccccccccc-SIG_K1_KBB6i8im8zUSfesLSHo5589UcAxxhXbKJVPnwo3t6ygqGNErc5ZzYAh8ckss8nPRAk3zwwF7aRyua64oCYu7i7J11q8NRt" ]' -p niubbbbbbbbb@active

# ׯ�ҿ���
cleos push action niueeeeeeeee reveal '[1, "79dbf9216224361564e3a5329789c9df38e040d17a6f07268e497b2ced273bca"]' -p niuaaaaaaaaa@active

