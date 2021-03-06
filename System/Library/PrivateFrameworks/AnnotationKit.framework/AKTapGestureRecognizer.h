/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:52 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UITapGestureRecognizer.h>
#import <libobjc.A.dylib/AKPenDetectionGestureRecognizerProtocol.h>

@class NSString;

@interface AKTapGestureRecognizer : UITapGestureRecognizer <AKPenDetectionGestureRecognizerProtocol> {

	BOOL _penGestureDetected;

}

@property (assign,nonatomic) BOOL penGestureDetected;               //@synthesize penGestureDetected=_penGestureDetected - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(void)reset;
-(void)setPenGestureDetected:(BOOL)arg1 ;
-(void)_checkTouchesForStylus:(id)arg1 ;
-(BOOL)penGestureDetected;
@end

