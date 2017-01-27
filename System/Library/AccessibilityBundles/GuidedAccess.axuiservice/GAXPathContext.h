/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:54:05 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/AccessibilityBundles/GuidedAccess.axuiservice/GuidedAccess
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <GuidedAccess/GuidedAccess-Structs.h>
@interface GAXPathContext : NSObject {

	CGPathRef _lastSeenCGPath;
	void* _linePointsContexts;
	void* _linePointsIndicesPerElementIndices;

}

@property (nonatomic,readonly) CGPathRef lastSeenCGPath;                              //@synthesize lastSeenCGPath=_lastSeenCGPath - In the implementation block
@property (nonatomic,readonly) void* linePointsContexts;                              //@synthesize linePointsContexts=_linePointsContexts - In the implementation block
@property (nonatomic,readonly) void* linePointsIndicesPerElementIndices;              //@synthesize linePointsIndicesPerElementIndices=_linePointsIndicesPerElementIndices - In the implementation block
-(void*)linePointsContexts;
-(void*)linePointsIndicesPerElementIndices;
-(id)initWithLastSeenCGPath:(CGPathRef)arg1 ;
-(CGPathRef)lastSeenCGPath;
-(void)dealloc;
@end

