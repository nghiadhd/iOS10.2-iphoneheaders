/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:54:53 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray, NSMutableArray, NSError;

@interface _NSKeyedUnarchiverHelper : NSObject {

	NSArray* _white;
	unsigned _lastRef;
	NSMutableArray* _allowedClasses;
	NSError* _decodeError;

}

@property (copy) NSError * decodeError;              //@synthesize decodeError=_decodeError - In the implementation block
-(id)allowedClassNames;
-(void)setAllowedClassNames:(id)arg1 ;
-(BOOL)classNameAllowed:(Class)arg1 ;
-(NSError *)decodeError;
-(void)setDecodeError:(NSError *)arg1 ;
-(id)init;
-(void)dealloc;
@end

