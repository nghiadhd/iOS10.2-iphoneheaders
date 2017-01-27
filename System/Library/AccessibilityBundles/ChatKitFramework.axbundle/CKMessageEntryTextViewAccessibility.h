/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:54:02 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/AccessibilityBundles/ChatKitFramework.axbundle/ChatKitFramework
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ChatKitFramework/ChatKitFramework-Structs.h>
#import <ChatKitFramework/__CKMessageEntryTextViewAccessibility_super.h>

@interface CKMessageEntryTextViewAccessibility : __CKMessageEntryTextViewAccessibility_super
+(id)safeCategoryTargetClassName;
+(void)_accessibilityPerformValidations:(id)arg1 ;
+(Class)safeCategoryBaseClass;
-(CGRect)_axBoundingRectForGlyphRange:(NSRange)arg1 ;
-(void)_axReplaceEmojiWithElement:(id)arg1 ;
-(void)_axShowOverlayWithEmojiElement:(id)arg1 ;
-(void)_axSetEmojiCandidates:(id)arg1 ;
-(id)_axCreateEmojiRotor;
-(id)_axEmojiCandidatesFromEmojiKit;
-(void)_axSetEmojiRotor:(id)arg1 ;
-(void)_axUpdateEmojiCandidates;
-(id)_axEmojiCandidates;
-(id)_axEmojiRotor;
-(void)_axRemoveElementFromEmojiCandidates:(id)arg1 ;
-(id)accessibilityPlaceholderValue;
-(void)layoutSubviews;
-(void)setAttributedText:(id)arg1 ;
-(id)accessibilityLabel;
-(id)accessibilityHint;
-(unsigned long long)accessibilityTraits;
-(BOOL)isAccessibilityElement;
-(id)accessibilityCustomRotors;
-(void)startTimer:(id)arg1 ;
-(void)updateTextView;
-(void)_accessibilityLoadAccessibilityInformation;
-(id)_accessibilitySupplementaryHeaderViews;
-(void)stopTimer:(id)arg1 ;
@end

