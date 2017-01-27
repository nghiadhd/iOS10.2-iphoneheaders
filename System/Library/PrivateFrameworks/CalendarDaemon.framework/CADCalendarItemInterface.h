/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:00 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/CalendarDaemon.framework/CalendarDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CADCalendarItemInterface
@required
-(void)CADDatabaseGetCalendarItemWithUUID:(id)arg1 reply:(/*^block*/id)arg2;
-(void)CADDatabaseFetchCalendarItemsWithPredicate:(id)arg1 entityType:(int)arg2 fetchIdentifier:(int)arg3 reply:(/*^block*/id)arg4;
-(void)CADDatabaseCancelFetchRequestWithIdentifier:(unsigned)arg1;
-(void)CADDatabaseExportCalendarItemAsICS:(SCD_Struct_CA1)arg1 reply:(/*^block*/id)arg2;
-(void)CADDatabaseGetContactIdentifierForCalendarItem:(SCD_Struct_CA1)arg1 reply:(/*^block*/id)arg2;
-(void)CADDatabaseAddContactWithIdentifier:(id)arg1 forCalendarItem:(SCD_Struct_CA1)arg2 withReply:(/*^block*/id)arg3;
-(void)CADDatabaseRemoveContactIdentifier:(id)arg1 forCalendarItem:(SCD_Struct_CA1)arg2 withReply:(/*^block*/id)arg3;
-(void)CADDatabaseCountEntitiesOfType:(int)arg1 withContactIdentifier:(id)arg2 withReply:(/*^block*/id)arg3;
-(void)CADDatabaseFetchEntitiesOfType:(int)arg1 withContactIdentifier:(id)arg2 withReply:(/*^block*/id)arg3;

@end

