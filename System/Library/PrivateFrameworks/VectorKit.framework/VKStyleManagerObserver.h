/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:16 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol VKStyleManagerObserver <NSObject>
@property (nonatomic,readonly) shared_ptr<gss::StylesheetManager<gss::PropertyID> >* styleManager; 
@optional
-(void)finishStyleBlend;
-(void)stylesheetDidChange;
-(void)stylesheetDidReload;
-(void)stylesheetDoneChanging;
-(void)stylesheetTransitionDidProgress;
-(void)stylesheetWillChange;
-(void)stylesheetWillTransition:(DisplayStyle)arg1;
-(void)prepareForStylesheetTransitionToMapDisplayStyle:(DisplayStyle)arg1 withReadinessBlock:(/*^block*/id)arg2;

@required
+(BOOL)reloadOnStylesheetChange;
-(shared_ptr<gss::StylesheetManager<gss::PropertyID> >*)styleManager;

@end

