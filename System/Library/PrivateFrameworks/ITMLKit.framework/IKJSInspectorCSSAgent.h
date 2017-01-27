/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:54 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/RWIProtocolCSSDomainHandler.h>

@class IKCSSStylesheet, IKViewElementStyleFactory, NSURL, IKJSInspectorController, NSString;

@interface IKJSInspectorCSSAgent : NSObject <RWIProtocolCSSDomainHandler> {

	IKCSSStylesheet* _stylesheet;
	IKViewElementStyleFactory* _styleFactory;
	NSURL* _defaultStyleSheetURL;
	IKJSInspectorController* _controller;

}

@property (nonatomic,__weak,readonly) IKJSInspectorController * controller;              //@synthesize controller=_controller - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(IKJSInspectorController *)controller;
-(id)initWithInspectorController:(id)arg1 ;
-(void)updateStylesheets;
-(void)resetStylesFromNode:(id)arg1 ;
-(id)_templateNameForDocument:(id)arg1 ;
-(id)_getMatchedStyleRulesForNode:(id)arg1 ;
-(id)_getStringForStyleName:(id)arg1 value:(id)arg2 inStyle:(id)arg3 ;
-(void)enableWithErrorCallback:(/*^block*/id)arg1 successCallback:(/*^block*/id)arg2 ;
-(void)disableWithErrorCallback:(/*^block*/id)arg1 successCallback:(/*^block*/id)arg2 ;
-(void)getMatchedStylesForNodeWithErrorCallback:(/*^block*/id)arg1 successCallback:(/*^block*/id)arg2 nodeId:(int)arg3 includePseudo:(BOOL*)arg4 includeInherited:(BOOL*)arg5 ;
-(void)getInlineStylesForNodeWithErrorCallback:(/*^block*/id)arg1 successCallback:(/*^block*/id)arg2 nodeId:(int)arg3 ;
-(void)getComputedStyleForNodeWithErrorCallback:(/*^block*/id)arg1 successCallback:(/*^block*/id)arg2 nodeId:(int)arg3 ;
-(void)getAllStyleSheetsWithErrorCallback:(/*^block*/id)arg1 successCallback:(/*^block*/id)arg2 ;
-(void)getStyleSheetWithErrorCallback:(/*^block*/id)arg1 successCallback:(/*^block*/id)arg2 styleSheetId:(id)arg3 ;
-(void)getStyleSheetTextWithErrorCallback:(/*^block*/id)arg1 successCallback:(/*^block*/id)arg2 styleSheetId:(id)arg3 ;
-(void)setStyleSheetTextWithErrorCallback:(/*^block*/id)arg1 successCallback:(/*^block*/id)arg2 styleSheetId:(id)arg3 text:(id)arg4 ;
-(void)setStyleTextWithErrorCallback:(/*^block*/id)arg1 successCallback:(/*^block*/id)arg2 styleId:(id)arg3 text:(id)arg4 ;
-(void)setRuleSelectorWithErrorCallback:(/*^block*/id)arg1 successCallback:(/*^block*/id)arg2 ruleId:(id)arg3 selector:(id)arg4 ;
-(void)createStyleSheetWithErrorCallback:(/*^block*/id)arg1 successCallback:(/*^block*/id)arg2 frameId:(id)arg3 ;
-(void)addRuleWithErrorCallback:(/*^block*/id)arg1 successCallback:(/*^block*/id)arg2 styleSheetId:(id)arg3 selector:(id)arg4 ;
-(void)getSupportedCSSPropertiesWithErrorCallback:(/*^block*/id)arg1 successCallback:(/*^block*/id)arg2 ;
-(void)getSupportedSystemFontFamilyNamesWithErrorCallback:(/*^block*/id)arg1 successCallback:(/*^block*/id)arg2 ;
-(void)forcePseudoStateWithErrorCallback:(/*^block*/id)arg1 successCallback:(/*^block*/id)arg2 nodeId:(int)arg3 forcedPseudoClasses:(id)arg4 ;
-(void)getNamedFlowCollectionWithErrorCallback:(/*^block*/id)arg1 successCallback:(/*^block*/id)arg2 documentNodeId:(int)arg3 ;
-(void)setPropertyTextWithErrorCallback:(/*^block*/id)arg1 successCallback:(/*^block*/id)arg2 styleId:(id)arg3 propertyIndex:(int)arg4 text:(id)arg5 overwrite:(BOOL)arg6 ;
-(void)togglePropertyWithErrorCallback:(/*^block*/id)arg1 successCallback:(/*^block*/id)arg2 styleId:(id)arg3 propertyIndex:(int)arg4 disable:(BOOL)arg5 ;
-(void)addRuleWithErrorCallback:(/*^block*/id)arg1 successCallback:(/*^block*/id)arg2 contextNodeId:(int)arg3 selector:(id)arg4 ;
-(id)_processClassSelector:(id)arg1 ;
@end

