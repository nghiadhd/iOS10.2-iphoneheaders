/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:23 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <OfficeImport/OfficeImport-Structs.h>
@interface MFPGraphicsState : NSObject {

	CGAffineTransform mPageTransform;
	CGAffineTransform mWorldTransform;

}
-(void)dealloc;
-(id)initWithDefaults;
-(void)setWorldTransform:(CGAffineTransform)arg1 ;
-(void)multiplyWorldTransformBy:(CGAffineTransform)arg1 order:(int)arg2 ;
-(void)setPageTransform:(CGAffineTransform)arg1 ;
-(id)initWithGraphicsState:(id)arg1 ;
-(CGAffineTransform)pageTransform;
-(void)removeTransform:(CGAffineTransform)arg1 ;
-(CGAffineTransform)worldTransform;
@end

