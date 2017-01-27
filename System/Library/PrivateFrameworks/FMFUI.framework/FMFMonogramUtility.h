/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:29 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/FMFUI.framework/FMFUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <FMFUI/FMFUI-Structs.h>
@interface FMFMonogramUtility : NSObject
+(void)setAddressBook:(void*)arg1 ;
+(id)contactImageCache;
+(id)monogramImageOfDiameter:(double)arg1 forRecordID:(int)arg2 monogramStyle:(long long)arg3 tintColor:(id)arg4 customFont:(id)arg5 isPersonImage:(BOOL*)arg6 ;
+(CFStringRef)hexStringFromColor:(id)arg1 ;
+(id)contactStatusCache;
+(id)monogrammerWithDiameter:(double)arg1 style:(long long)arg2 useTintColor:(id)arg3 customFont:(id)arg4 ;
+(id)placeholderContactImageOfDiameter:(double)arg1 monogramStyle:(long long)arg2 useTintColor:(id)arg3 ;
+(void)clearMonogramCache;
+(id)monogramImageOfDiameter:(double)arg1 forRecordID:(int)arg2 useTintColor:(id)arg3 useCustomFont:(BOOL)arg4 isPersonImage:(BOOL*)arg5 ;
@end

