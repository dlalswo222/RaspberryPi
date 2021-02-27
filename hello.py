import datetime as dt

while(1):
    now = dt.datetime.now()
    if(now.hour == 1 and now.minute == 6):
        print('This is {}:{}'.format(now.hour,now.minute))
        break