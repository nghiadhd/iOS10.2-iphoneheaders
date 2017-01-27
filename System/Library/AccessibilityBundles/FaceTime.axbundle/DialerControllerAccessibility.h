/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:54:03 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/AccessibilityBundles/FaceTime.axbundle/FaceTime
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FaceTime/__DialerControllerAccessibility_super.h>

@interface DialerControllerAccessibility : __DialerControllerAccessibility_super
+(id)safeCategoryTargetClassName;
+(void)_accessibilityPerformValidations:(id)arg1 ;
+(Class)safeCategoryBaseClass;
-(void)_voiceOverStatusChange:(id)arg1 ;
-(void)dealloc;
-(void)loadView;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)phonePad:(id)arg1 appendString:(id)arg2 ;
-(void)phonePad:(id)arg1 replaceLastDigitWithString:(id)arg2 ;
-(void)phonePadDeleteLastDigit:(id)arg1 ;
-(void)_accessibilityInsertText:(id)arg1 atPosition:(long long)arg2 ;
-(BOOL)_accessibilitySupportsHandwriting;
-(int)_accessibilityHandwritingAttributePreferredCharacterSet;
-(BOOL)_accessibilityHandwritingAttributeCanDeleteCharacter;
-(BOOL)_accessibilityHandwritingAttributeAcceptsRawInput;
-(int)_accessibilityHandwritingAttributeAllowedCharacterSets;
-(void)_accessibilityReplaceCharactersAtCursor:(unsigned long long)arg1 withString:(id)arg2 ;
-(void)_accessibilityLoadAccessibilityInformation;
@end

