/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:34:49 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface SSRestrictions : NSObject
+(BOOL)_isExplicitContentDisallowedInCurrentStoreFront;
+(BOOL)_calculateIsRestrictionsPasscodeSet;
+(BOOL)_isExplicitContentRestrictedByDefaultInCurrentStoreFront;
+(void)isExplicitContentRestrictedByDefaultInCurrentStoreFront:(/*^block*/id)arg1 ;
+(void)isExplicitContentDisallowedInCurrentStoreFront:(/*^block*/id)arg1 ;
+(void)isRestrictionsPasscodeSet:(/*^block*/id)arg1 ;
+(void)setAllowExplicitContent;
+(void)shouldDisplayExplicitRestrictionAlertOfType:(long long)arg1 completionBlock:(/*^block*/id)arg2 ;
+(void)didDisplayExplicitRestrictionAlertOfType:(long long)arg1 ;
+(BOOL)isActiveAccountAllowedToUpdateRestrictions;
+(id)setOfActiveRestrictionUUIDs;
@end

