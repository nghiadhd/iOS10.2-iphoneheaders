/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:59:24 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /Applications/iBooks.app/Frameworks/IMCommonCore.framework/IMCommonCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <IMCommonCore/IMCommonCoreAccessibilityExtras.h>

@class UIColor, NSString;

@interface IMCommonCoreAccessibility : NSObject <IMCommonCoreAccessibilityExtras> {

	BOOL _accessibilitySupportLoaded;

}

@property (nonatomic,retain) UIColor * preferredSpeakScreenHighlightColor; 
@property (nonatomic,retain) UIColor * preferredSpeakScreenUnderlineColor; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,setter=_setAccessibilitySupportLoaded:,getter=_isAccessibilitySupportLoaded,nonatomic) BOOL _accessibilitySupportLoaded;              //@synthesize accessibilitySupportLoaded=_accessibilitySupportLoaded - In the implementation block
+(id)sharedInstance;
-(UIColor *)preferredSpeakScreenHighlightColor;
-(void)setPreferredSpeakScreenHighlightColor:(UIColor *)arg1 ;
-(UIColor *)preferredSpeakScreenUnderlineColor;
-(void)setPreferredSpeakScreenUnderlineColor:(UIColor *)arg1 ;
-(id)preferencesDomain;
-(BOOL)needsAccessibilityAnnouncements;
-(void)performExtraValidation;
-(void)addExtraSafeCategoryNamesToCollection:(id)arg1 ;
-(BOOL)_isAccessibilitySupportLoaded;
-(void)addSafeCategoryNamesToCollection:(id)arg1 ;
-(void)_setAccessibilitySupportLoaded:(BOOL)arg1 ;
-(void)loadAccessibilitySupport;
-(BOOL)needsAccessibilityElements;
-(void)performValidation;
@end

