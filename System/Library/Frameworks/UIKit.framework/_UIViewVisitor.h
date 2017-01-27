/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:19 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface _UIViewVisitor : NSObject {

	BOOL _visitMaskViews;
	BOOL _tracksHierarchy;
	BOOL __currentlyVisitingHierarchy;
	unsigned long long _traversalDirection;

}

@property (assign,nonatomic) BOOL tracksHierarchy;                                 //@synthesize tracksHierarchy=_tracksHierarchy - In the implementation block
@property (assign,nonatomic) BOOL _currentlyVisitingHierarchy;                     //@synthesize _currentlyVisitingHierarchy=__currentlyVisitingHierarchy - In the implementation block
@property (nonatomic,readonly) unsigned long long traversalDirection;              //@synthesize traversalDirection=_traversalDirection - In the implementation block
@property (assign,nonatomic) BOOL visitMaskViews;                                  //@synthesize visitMaskViews=_visitMaskViews - In the implementation block
+(void)_addHierarchyTrackingVisitor:(id)arg1 ;
+(void)_removeHierarchyTrackingVisitor:(id)arg1 ;
+(void)_startTraversalOfVisitor:(id)arg1 withView:(id)arg2 ;
-(id)initWithTraversalDirection:(unsigned long long)arg1 ;
-(void)setVisitMaskViews:(BOOL)arg1 ;
-(unsigned long long)traversalDirection;
-(void)setTracksHierarchy:(BOOL)arg1 ;
-(BOOL)tracksHierarchy;
-(BOOL)_prepareVisitor:(id)arg1 toVisitView:(id)arg2 changedSubview:(id)arg3 previousWindow:(id)arg4 previousSuperview:(id)arg5 ;
-(void)set_currentlyVisitingHierarchy:(BOOL)arg1 ;
-(BOOL)_visitView:(id)arg1 ;
-(BOOL)visitMaskViews;
-(BOOL)_currentlyVisitingHierarchy;
@end

