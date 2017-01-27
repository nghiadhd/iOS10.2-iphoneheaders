/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:39 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol TPLayerDelegateProxyDelegate;
#import <iWorkImport/iWorkImport-Structs.h>
@interface TPLayerDelegateProxy : NSObject {

	id<TPLayerDelegateProxyDelegate> _delegate;

}
-(BOOL)respondsToSelector:(SEL)arg1 ;
-(void)displayLayer:(id)arg1 ;
-(void)drawLayer:(id)arg1 inContext:(CGContextRef)arg2 ;
-(void)layoutSublayersOfLayer:(id)arg1 ;
-(id)actionForLayer:(id)arg1 forKey:(id)arg2 ;
-(id)initWithDelegate:(id)arg1 ;
-(void)clearDelegate;
@end

