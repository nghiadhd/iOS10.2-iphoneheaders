/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:07 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/MobileCoreServices.framework/MobileCoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MobileCoreServices/_LSLazyPropertyList.h>

@class NSArray;

@interface _LSCompoundLazyPropertyList : _LSLazyPropertyList {

	NSArray* _plists;

}
+(BOOL)supportsSecureCoding;
-(id)_loadPropertyListPeeking:(BOOL)arg1 ;
-(id)initWithLazyPropertyLists:(id)arg1 ;
-(BOOL)_getValue:(id*)arg1 forPropertyListKey:(id)arg2 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
@end

