/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:23 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <OfficeImport/OfficeImport-Structs.h>
@class NSString;

@interface MFPFont : NSObject {

	float mSize;
	int mUnit;
	unsigned mFlags;
	NSString* mName;

}
-(float)size;
-(void)dealloc;
-(void)setName:(id)arg1 ;
-(id)name;
-(void)setSize:(float)arg1 ;
-(int)unit;
-(void)setUnit:(int)arg1 ;
-(void)setFlags:(unsigned)arg1 ;
-(unsigned)flags;
-(CTFontRef)createCTFontWithGraphics:(id)arg1 ;
@end

