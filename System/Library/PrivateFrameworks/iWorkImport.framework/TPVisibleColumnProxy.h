/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:39 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSWPOffscreenColumn.h>

@class TPPageController, NSString;

@interface TPVisibleColumnProxy : NSObject <TSWPOffscreenColumn> {

	unsigned long long _pageIndex;
	TPPageController* _pageController;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) unsigned long long startCharIndex; 
@property (nonatomic,readonly) NSRange range; 
@property (nonatomic,readonly) unsigned long long startAnchoredCharIndex; 
@property (nonatomic,readonly) NSRange anchoredRange; 
@property (nonatomic,readonly) unsigned long long nextWidowPullsDownFromCharIndex; 
-(unsigned long long)startCharIndex;
-(NSRange)anchoredRange;
-(unsigned long long)nextWidowPullsDownFromCharIndex;
-(void)trimToCharIndex:(unsigned long long)arg1 inTarget:(id)arg2 removeFootnoteReferenceCount:(unsigned long long)arg3 removeAutoNumberFootnoteCount:(unsigned long long)arg4 ;
-(unsigned long long)startAnchoredCharIndex;
-(id)initWithPageIndex:(unsigned long long)arg1 pageController:(id)arg2 ;
-(const TSWPTargetHint*)p_targetFirstHint;
-(const TSWPTargetHint*)p_targetLastHint;
-(void)dealloc;
-(NSRange)range;
@end

