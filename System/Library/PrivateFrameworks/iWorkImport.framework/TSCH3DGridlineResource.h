/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:33 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/TSCH3DResource.h>

@class TSCH3DAxisGridEnumerator, TSDStroke;

@interface TSCH3DGridlineResource : TSCH3DResource {

	TSCH3DAxisGridEnumerator* mAxis;

}

@property (nonatomic,readonly) BOOL enabled; 
@property (nonatomic,readonly) TSDStroke * stroke; 
@property (nonatomic,readonly) float opacity; 
+(id)resourceWithAxisEnumerator:(id)arg1 ;
-(id)initWithAxisEnumerator:(id)arg1 ;
-(BOOL)enabled;
-(void)dealloc;
-(TSDStroke *)stroke;
-(float)opacity;
-(id)get;
@end

