/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:22 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <OfficeImport/OfficeImport-Structs.h>
@class NSMutableArray;

@interface OADPath : NSObject {

	CGSize mSize;
	NSMutableArray* mElements;
	int mFillMode;
	BOOL mStroked;

}
-(id)init;
-(CGSize)size;
-(void)dealloc;
-(id)description;
-(void)setSize:(CGSize)arg1 ;
-(void)setFillMode:(int)arg1 ;
-(void)setStroked:(BOOL)arg1 ;
-(int)fillMode;
-(void)addElement:(id)arg1 ;
-(unsigned long long)elementCount;
-(id)elementAtIndex:(unsigned long long)arg1 ;
-(BOOL)stroked;
@end

