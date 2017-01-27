/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:01 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/_UIBackdropViewObserver.h>
#import <libobjc.A.dylib/SBFLegibilitySettingsProvider.h>

@protocol SBFLegibilitySettingsProviderDelegate;
@class _UILegibilitySettings, _UIBackdropView, NSString;

@interface SBFBackdropLegibilitySettingsProvider : NSObject <_UIBackdropViewObserver, SBFLegibilitySettingsProvider> {

	_UIBackdropView* _backdropView;
	_UILegibilitySettings* _legibilitySettings;
	id<SBFLegibilitySettingsProviderDelegate> _delegate;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) _UILegibilitySettings * legibilitySettings;                           //@synthesize legibilitySettings=_legibilitySettings - In the implementation block
@property (assign,nonatomic,__weak) id<SBFLegibilitySettingsProviderDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)setDelegate:(id<SBFLegibilitySettingsProviderDelegate>)arg1 ;
-(void)dealloc;
-(id<SBFLegibilitySettingsProviderDelegate>)delegate;
-(_UILegibilitySettings *)legibilitySettings;
-(void)backdropViewDidChange:(id)arg1 ;
-(id)initWithBackdropView:(id)arg1 ;
@end

