/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:16 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class UITextRange, NSDictionary, UITextPosition, UIView;


@protocol UITextInput <UIKeyInput>
@property (copy) UITextRange * selectedTextRange; 
@property (nonatomic,readonly) UITextRange * markedTextRange; 
@property (nonatomic,copy) NSDictionary * markedTextStyle; 
@property (nonatomic,readonly) UITextPosition * beginningOfDocument; 
@property (nonatomic,readonly) UITextPosition * endOfDocument; 
@property (assign,nonatomic,__weak) id<UITextInputDelegate> inputDelegate; 
@property (nonatomic,readonly) id<UITextInputTokenizer> tokenizer; 
@property (nonatomic,readonly) UIView * textInputView; 
@property (assign,nonatomic) long long selectionAffinity; 
@property (nonatomic,readonly) id insertDictationResultPlaceholder; 
@optional
-(BOOL)shouldChangeTextInRange:(id)arg1 replacementText:(id)arg2;
-(id)textStylingAtPosition:(id)arg1 inDirection:(long long)arg2;
-(id)positionWithinRange:(id)arg1 atCharacterOffset:(long long)arg2;
-(long long)characterOffsetOfPosition:(id)arg1 withinRange:(id)arg2;
-(void)insertDictationResult:(id)arg1;
-(void)dictationRecordingDidEnd;
-(void)dictationRecognitionFailed;
-(CGRect*)frameForDictationResultPlaceholder:(id)arg1;
-(void)removeDictationResultPlaceholder:(id)arg1 willInsertResult:(BOOL)arg2;
-(void)beginFloatingCursorAtPoint:(CGPoint)arg1;
-(void)updateFloatingCursorAtPoint:(CGPoint)arg1;
-(void)endFloatingCursor;
-(UIView *)textInputView;
-(long long)selectionAffinity;
-(void)setSelectionAffinity:(long long)arg1;
-(id)insertDictationResultPlaceholder;

@required
-(id)textInRange:(id)arg1;
-(void)replaceRange:(id)arg1 withText:(id)arg2;
-(void)setMarkedText:(id)arg1 selectedRange:(NSRange)arg2;
-(void)unmarkText;
-(id)textRangeFromPosition:(id)arg1 toPosition:(id)arg2;
-(id)positionFromPosition:(id)arg1 offset:(long long)arg2;
-(id)positionFromPosition:(id)arg1 inDirection:(long long)arg2 offset:(long long)arg3;
-(long long)comparePosition:(id)arg1 toPosition:(id)arg2;
-(long long)offsetFromPosition:(id)arg1 toPosition:(id)arg2;
-(id)positionWithinRange:(id)arg1 farthestInDirection:(long long)arg2;
-(id)characterRangeByExtendingPosition:(id)arg1 inDirection:(long long)arg2;
-(long long)baseWritingDirectionForPosition:(id)arg1 inDirection:(long long)arg2;
-(void)setBaseWritingDirection:(long long)arg1 forRange:(id)arg2;
-(CGRect*)firstRectForRange:(id)arg1;
-(CGRect*)caretRectForPosition:(id)arg1;
-(id)selectionRectsForRange:(id)arg1;
-(id)closestPositionToPoint:(CGPoint)arg1;
-(id)closestPositionToPoint:(CGPoint)arg1 withinRange:(id)arg2;
-(id)characterRangeAtPoint:(CGPoint)arg1;
-(UITextRange *)selectedTextRange;
-(void)setSelectedTextRange:(id)arg1;
-(UITextRange *)markedTextRange;
-(NSDictionary *)markedTextStyle;
-(void)setMarkedTextStyle:(id)arg1;
-(UITextPosition *)beginningOfDocument;
-(UITextPosition *)endOfDocument;
-(id<UITextInputDelegate>)inputDelegate;
-(void)setInputDelegate:(id)arg1;
-(id<UITextInputTokenizer>)tokenizer;

@end

