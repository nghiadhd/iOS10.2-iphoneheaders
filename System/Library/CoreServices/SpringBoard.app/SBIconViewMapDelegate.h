/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:54:30 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SBIconViewMapDelegate <SBReusableViewMapDelegate>
@optional
-(id)viewMapShouldPrepareViewsOfClasses:(id)arg1;
-(unsigned long long)viewMap:(id)arg1 numberOfViewsToPrepareOfClass:(Class)arg2;
-(void)viewMap:(id)arg1 configureIconView:(id)arg2;

@required
-(Class)iconViewClassForIcon:(id)arg1 location:(int)arg2;
-(int)viewMap:(id)arg1 locationForIcon:(id)arg2;

@end

