/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:18 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIInterfaceActionVisualStyleViewState.h>
#import <libobjc.A.dylib/NSCopying.h>

@class UIInterfaceAction, UIColor;

@interface UIInterfaceActionViewState : UIInterfaceActionVisualStyleViewState <NSCopying> {

	BOOL _isHighlighted;
	BOOL _isFocused;
	BOOL _isPreferred;
	UIInterfaceAction* _action;
	id _actionViewStateContext;
	UIColor* _legacyPresentationTintColor;

}

@property (nonatomic,readonly) UIInterfaceAction * action;                         //@synthesize action=_action - In the implementation block
@property (nonatomic,readonly) BOOL isHighlighted;                                 //@synthesize isHighlighted=_isHighlighted - In the implementation block
@property (nonatomic,readonly) BOOL isFocused;                                     //@synthesize isFocused=_isFocused - In the implementation block
@property (nonatomic,readonly) BOOL isPreferred;                                   //@synthesize isPreferred=_isPreferred - In the implementation block
@property (nonatomic,readonly) id actionViewStateContext;                          //@synthesize actionViewStateContext=_actionViewStateContext - In the implementation block
@property (nonatomic,readonly) UIColor * legacyPresentationTintColor;              //@synthesize legacyPresentationTintColor=_legacyPresentationTintColor - In the implementation block
+(id)viewStateForActionRepresentationViewDescendantView:(id)arg1 action:(id)arg2 ;
+(id)viewStateForActionRepresentationView:(id)arg1 action:(id)arg2 ;
+(id)viewStateRepresentingDefaultAction;
+(id)viewStateForAlertControllerActionView:(id)arg1 ;
+(id)viewStateRepresentingPreferredAction;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(UIInterfaceAction *)action;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isFocused;
-(BOOL)isHighlighted;
-(id)initWithPropertiesFromActionRepresentationView:(id)arg1 groupView:(id)arg2 action:(id)arg3 ;
-(void)_collectStateForDefaultState;
-(void)_collectStateFromActionRepresentationView:(id)arg1 ;
-(void)_collectStateFromAction:(id)arg1 ;
-(void)_collectStateFromActionViewState:(id)arg1 ;
-(BOOL)_stateEqualToActionViewState:(id)arg1 ;
-(id)_legacyPresentationTintColorForActionRepresentationDescendantView:(id)arg1 ;
-(id)actionViewStateContext;
-(BOOL)isPreferred;
-(UIColor *)legacyPresentationTintColor;
@end

