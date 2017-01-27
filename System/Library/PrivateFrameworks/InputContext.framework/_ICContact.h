/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:55 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/InputContext.framework/InputContext
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSArray;

@interface _ICContact : NSObject {

	NSString* _firstName;
	NSString* _phoneticFirstName;
	NSString* _middleName;
	NSString* _phoneticMiddleName;
	NSString* _lastName;
	NSString* _phoneticLastName;
	NSString* _organizationName;
	NSString* _jobTitle;
	NSString* _nickname;
	NSArray* _relations;
	NSArray* _streets;
	NSArray* _cities;
	double _score;

}

@property (nonatomic,readonly) NSString * firstName;                       //@synthesize firstName=_firstName - In the implementation block
@property (nonatomic,readonly) NSString * phoneticFirstName;               //@synthesize phoneticFirstName=_phoneticFirstName - In the implementation block
@property (nonatomic,readonly) NSString * middleName;                      //@synthesize middleName=_middleName - In the implementation block
@property (nonatomic,readonly) NSString * phoneticMiddleName;              //@synthesize phoneticMiddleName=_phoneticMiddleName - In the implementation block
@property (nonatomic,readonly) NSString * lastName;                        //@synthesize lastName=_lastName - In the implementation block
@property (nonatomic,readonly) NSString * phoneticLastName;                //@synthesize phoneticLastName=_phoneticLastName - In the implementation block
@property (nonatomic,readonly) NSString * organizationName;                //@synthesize organizationName=_organizationName - In the implementation block
@property (nonatomic,readonly) NSString * jobTitle;                        //@synthesize jobTitle=_jobTitle - In the implementation block
@property (nonatomic,readonly) NSString * nickname;                        //@synthesize nickname=_nickname - In the implementation block
@property (nonatomic,readonly) NSArray * relations;                        //@synthesize relations=_relations - In the implementation block
@property (nonatomic,readonly) NSArray * streets;                          //@synthesize streets=_streets - In the implementation block
@property (nonatomic,readonly) NSArray * cities;                           //@synthesize cities=_cities - In the implementation block
@property (nonatomic,readonly) double score;                               //@synthesize score=_score - In the implementation block
-(NSArray *)relations;
-(NSString *)jobTitle;
-(NSString *)phoneticLastName;
-(NSString *)phoneticFirstName;
-(NSString *)phoneticMiddleName;
-(NSArray *)cities;
-(NSString *)nickname;
-(double)score;
-(NSString *)firstName;
-(NSString *)lastName;
-(NSString *)organizationName;
-(id)initWithFirstName:(id)arg1 phoneticFirstName:(id)arg2 middleName:(id)arg3 phoneticMiddleName:(id)arg4 lastName:(id)arg5 phoneticLastName:(id)arg6 organizationName:(id)arg7 jobTitle:(id)arg8 nickname:(id)arg9 relations:(id)arg10 streets:(id)arg11 cities:(id)arg12 score:(double)arg13 ;
-(NSArray *)streets;
-(NSString *)middleName;
@end

