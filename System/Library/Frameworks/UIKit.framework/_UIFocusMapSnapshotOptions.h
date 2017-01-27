/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:17 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@protocol _UIFocusMapArea, _UIFocusRegionContainer;
@class UIScreen, _UIFocusedItemRegion;

@interface _UIFocusMapSnapshotOptions : NSObject <NSCopying> {

	BOOL _needsRegionSearchAreaRefresh;
	BOOL _needsContainerSearchAreaRefresh;
	BOOL _snapshotFrameIsEmpty;
	id<_UIFocusMapArea> _regionSearchArea;
	id<_UIFocusMapArea> _containerSearchArea;
	UIScreen* _screen;
	id<_UIFocusRegionContainer> _rootContainer;
	_UIFocusedItemRegion* _focusedRegion;
	id<_UIFocusRegionContainer> _resultsContainer;
	CGRect _snapshotFrame;

}

@property (nonatomic,readonly) BOOL snapshotFrameIsEmpty;                                      //@synthesize snapshotFrameIsEmpty=_snapshotFrameIsEmpty - In the implementation block
@property (nonatomic,copy,readonly) id<_UIFocusMapArea> regionSearchArea;                      //@synthesize regionSearchArea=_regionSearchArea - In the implementation block
@property (nonatomic,copy,readonly) id<_UIFocusMapArea> containerSearchArea;                   //@synthesize containerSearchArea=_containerSearchArea - In the implementation block
@property (assign,nonatomic,__weak) UIScreen * screen;                                         //@synthesize screen=_screen - In the implementation block
@property (assign,nonatomic,__weak) id<_UIFocusRegionContainer> rootContainer;                 //@synthesize rootContainer=_rootContainer - In the implementation block
@property (nonatomic,copy) _UIFocusedItemRegion * focusedRegion;                               //@synthesize focusedRegion=_focusedRegion - In the implementation block
@property (assign,nonatomic,__weak) id<_UIFocusRegionContainer> resultsContainer;              //@synthesize resultsContainer=_resultsContainer - In the implementation block
@property (assign,nonatomic) CGRect snapshotFrame;                                             //@synthesize snapshotFrame=_snapshotFrame - In the implementation block
-(id)init;
-(UIScreen *)screen;
-(_UIFocusedItemRegion *)focusedRegion;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setScreen:(UIScreen *)arg1 ;
-(void)setRootContainer:(id<_UIFocusRegionContainer>)arg1 ;
-(void)setFocusedRegion:(_UIFocusedItemRegion *)arg1 ;
-(void)setResultsContainer:(id<_UIFocusRegionContainer>)arg1 ;
-(void)_setNeedsSearchAreaRefresh;
-(CGRect)snapshotFrame;
-(id<_UIFocusMapArea>)regionSearchArea;
-(id<_UIFocusRegionContainer>)rootContainer;
-(void)setSnapshotFrame:(CGRect)arg1 ;
-(id<_UIFocusMapArea>)containerSearchArea;
-(id<_UIFocusRegionContainer>)resultsContainer;
-(BOOL)snapshotFrameIsEmpty;
@end

