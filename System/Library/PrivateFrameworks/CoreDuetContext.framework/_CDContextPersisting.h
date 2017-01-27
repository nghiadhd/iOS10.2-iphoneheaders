/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:19 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/CoreDuetContext.framework/CoreDuetContext
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol _CDContextPersisting
@required
-(void)deleteAllData;
-(void)saveValue:(id)arg1 forKeyPath:(id)arg2;
-(void)saveRegistration:(id)arg1;
-(void)deleteRegistration:(id)arg1;
-(id)loadValues;
-(id)loadRegistrations;
-(void)deleteDataCreatedBefore:(id)arg1;

@end

