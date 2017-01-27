/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:23 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WebCore/WebCore-Structs.h>
#import <WebCore/DOMObject.h>
#import <UIKit/UITextInput_Internal.h>
#import <UIKit/UIWebSelectionBlock.h>
#import <UIKit/UIKeyboardInput.h>
#import <UIKit/UITextInputPrivate.h>
#import <UIKit/UIKeyInput.h>
#import <UIKit/UITextInputTokenizer.h>
#import <libobjc.A.dylib/DOMEventTarget.h>

@class UITextInteractionAssistant, NSString, UITextRange, NSDictionary, UITextPosition, UIView, NSIndexSet, UIColor, UIImage, UIInputContextHistory, WebArchive, DOMNodeList, DOMDocument, DOMNamedNodeMap, DOMElement;

@interface DOMNode : DOMObject <UITextInput_Internal, UIWebSelectionBlock, UIKeyboardInput, UITextInputPrivate, UIKeyInput, UITextInputTokenizer, DOMEventTarget>

@property (readonly) BOOL mf_isBody; 
@property (readonly) BOOL mf_isAttachment; 
@property (getter=_proxyTextInput,nonatomic,readonly) UIResponder*<UITextInput> __content; 
@property (nonatomic,readonly) UIView*<UITextInputPrivate> _textSelectingContainer; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) long long autocapitalizationType; 
@property (assign,nonatomic) long long autocorrectionType; 
@property (assign,nonatomic) long long spellCheckingType; 
@property (assign,nonatomic) long long keyboardType; 
@property (assign,nonatomic) long long keyboardAppearance; 
@property (assign,nonatomic) long long returnKeyType; 
@property (assign,nonatomic) BOOL enablesReturnKeyAutomatically; 
@property (assign,getter=isSecureTextEntry,nonatomic) BOOL secureTextEntry; 
@property (nonatomic,copy) NSString * textContentType; 
@property (nonatomic,readonly) BOOL hasText; 
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
@property (nonatomic,copy) NSString * recentInputIdentifier; 
@property (assign,nonatomic) NSRange validTextRange; 
@property (nonatomic,copy) NSIndexSet * PINEntrySeparatorIndexes; 
@property (assign,nonatomic) CFCharacterSetRef textTrimmingSet; 
@property (nonatomic,retain) UIColor * insertionPointColor; 
@property (nonatomic,retain) UIColor * selectionBarColor; 
@property (nonatomic,retain) UIColor * selectionHighlightColor; 
@property (nonatomic,retain) UIImage * selectionDragDotImage; 
@property (assign,nonatomic) unsigned long long insertionPointWidth; 
@property (assign,nonatomic) int textLoupeVisibility; 
@property (assign,nonatomic) int textSelectionBehavior; 
@property (assign,nonatomic) id textSuggestionDelegate; 
@property (assign,nonatomic) BOOL isSingleLineDocument; 
@property (assign,nonatomic) BOOL contentsIsSingleValue; 
@property (assign,nonatomic) BOOL hasDefaultContents; 
@property (assign,nonatomic) BOOL acceptsEmoji; 
@property (assign,nonatomic) BOOL acceptsDictationSearchResults; 
@property (assign,nonatomic) BOOL forceEnableDictation; 
@property (assign,nonatomic) BOOL forceDisableDictation; 
@property (assign,nonatomic) BOOL forceDefaultDictationInfo; 
@property (assign,nonatomic) long long forceDictationKeyboardType; 
@property (assign,nonatomic) int emptyContentReturnKeyType; 
@property (assign,nonatomic) BOOL returnKeyGoesToNextResponder; 
@property (assign,nonatomic) BOOL acceptsFloatingKeyboard; 
@property (assign,nonatomic) BOOL acceptsSplitKeyboard; 
@property (assign,nonatomic) BOOL displaySecureTextUsingPlainText; 
@property (assign,nonatomic) BOOL displaySecureEditsUsingPlainText; 
@property (assign,nonatomic) BOOL learnsCorrections; 
@property (assign,nonatomic) int shortcutConversionType; 
@property (assign,nonatomic) BOOL suppressReturnKeyStyling; 
@property (assign,nonatomic) BOOL useInterfaceLanguageForLocalization; 
@property (assign,nonatomic) BOOL deferBecomingResponder; 
@property (assign,nonatomic) BOOL enablesReturnKeyOnNonWhiteSpaceContent; 
@property (nonatomic,copy) NSString * autocorrectionContext; 
@property (nonatomic,copy) NSString * responseContext; 
@property (nonatomic,retain) UIInputContextHistory * inputContextHistory; 
@property (assign,nonatomic) BOOL disablePrediction; 
@property (assign,nonatomic) BOOL disableInputBars; 
@property (assign,nonatomic) BOOL isCarPlayIdiom; 
@property (assign,nonatomic) long long textScriptType; 
@property (nonatomic,readonly) UITextInteractionAssistant * interactionAssistant; 
@property (assign,nonatomic) long long selectionGranularity; 
@property (nonatomic,readonly) id<UITextInputSuggestionDelegate> textInputSuggestionDelegate; 
@property (assign,nonatomic) long long _textInputSource; 
@property (nonatomic,readonly) WebArchive * webArchive; 
@property (copy,readonly) NSString * nodeName; 
@property (copy) NSString * nodeValue; 
@property (readonly) unsigned short nodeType; 
@property (readonly) DOMNode * parentNode; 
@property (readonly) DOMNodeList * childNodes; 
@property (readonly) DOMNode * firstChild; 
@property (readonly) DOMNode * lastChild; 
@property (readonly) DOMNode * previousSibling; 
@property (readonly) DOMNode * nextSibling; 
@property (readonly) DOMDocument * ownerDocument; 
@property (copy,readonly) NSString * namespaceURI; 
@property (copy) NSString * prefix; 
@property (copy,readonly) NSString * localName; 
@property (readonly) DOMNamedNodeMap * attributes; 
@property (copy,readonly) NSString * baseURI; 
@property (copy) NSString * textContent; 
@property (readonly) DOMElement * parentElement; 
@property (readonly) BOOL isContentEditable; 
+(id)_nodeFromJSWrapper:(OpaqueJSValueRef)arg1 ;
-(BOOL)dd_searchForLinkRemovingExistingDDLinksWithEndNode:(id)arg1 didModifyDOM:(BOOL*)arg2 ;
-(void)dd_removeResultLinks;
-(id)mf_childNodeAtIndex:(int)arg1 ;
-(id)mf_lastSibling;
-(id)mf_firstSibling;
-(BOOL)mf_isQuoteOrWithinQuote;
-(id)mf_findElementWithTag:(id)arg1 className:(id)arg2 andIdName:(id)arg3 ;
-(BOOL)mf_isDescendantOfNode:(id)arg1 ;
-(id)mf_traverseNextNodeStayingWithin:(id)arg1 ;
-(id)mf_traverseNextSiblingStayingWithin:(id)arg1 ;
-(id)mf_blockNodeAncestor;
-(id)mf_containingBlockQuote;
-(BOOL)mf_isAtBeginningOfContainerNode:(id)arg1 ;
-(BOOL)mf_isAtEndOfContainerNode:(id)arg1 ;
-(BOOL)mf_containsOnlySelectionMarkers;
-(id)mf_appendBlockPlaceholder;
-(id)mf_nextSiblingOrAunt;
-(id)mf_highestContainingBlockQuote;
-(id)mf_firstDescendantBlockQuote;
-(BOOL)mf_containsRichText;
-(void)recursivelyRemoveMailAttributes;
-(int)mf_quoteLevelDelta;
-(void)_fixParagraphsAndQuotesFromMicrosoftNodesToRemove:(id)arg1 ;
-(BOOL)mf_isBody;
-(BOOL)mf_isAttachment;
-(id)mf_commonAncestorWithNode:(id)arg1 ;
-(void)mf_fixParagraphsAndQuotesFromMicrosoft;
-(id)mf_traversePreviousNode;
-(id)mf_topmostContainingNodeWithNameInArray:(id)arg1 ;
-(void)_startAssistingDocumentView:(id)arg1 ;
-(void)_stopAssistingDocumentView:(id)arg1 ;
-(BOOL)_requiresAccessoryView;
-(BOOL)_requiresInputView;
-(BOOL)_supportsAutoFill;
-(BOOL)_supportsAccessoryClear;
-(void)_accessoryClear;
-(id)_nextAssistedNode;
-(id)_previousAssistedNode;
-(id)_textFormElement;
-(UIView *)textInputView;
-(CGRect)_selectionClipRect;
-(id)_proxyTextInput;
-(NSRange)_selectedNSRange;
-(id<UITextInputSuggestionDelegate>)textInputSuggestionDelegate;
-(void)_expandSelectionToStartOfWordsBeforeCaretSelection:(int)arg1 ;
-(void)_extendCurrentSelection:(int)arg1 ;
-(void)_setCaretSelectionAtEndOfSelection;
-(id)_moveToEndOfWord:(BOOL)arg1 withHistory:(id)arg2 ;
-(id)_moveToEndOfLine:(BOOL)arg1 withHistory:(id)arg2 ;
-(id)_moveRight:(BOOL)arg1 withHistory:(id)arg2 ;
-(id)_moveToStartOfWord:(BOOL)arg1 withHistory:(id)arg2 ;
-(id)_moveToStartOfLine:(BOOL)arg1 withHistory:(id)arg2 ;
-(id)_moveLeft:(BOOL)arg1 withHistory:(id)arg2 ;
-(id)_moveToEndOfParagraph:(BOOL)arg1 withHistory:(id)arg2 ;
-(id)_moveToEndOfDocument:(BOOL)arg1 withHistory:(id)arg2 ;
-(id)_moveDown:(BOOL)arg1 withHistory:(id)arg2 ;
-(id)_moveToStartOfParagraph:(BOOL)arg1 withHistory:(id)arg2 ;
-(id)_moveToStartOfDocument:(BOOL)arg1 withHistory:(id)arg2 ;
-(id)_moveUp:(BOOL)arg1 withHistory:(id)arg2 ;
-(void)_deleteByWord;
-(void)_deleteToStartOfLine;
-(void)_deleteToEndOfLine;
-(void)_setMarkedText:(id)arg1 selectedRange:(NSRange)arg2 ;
-(void)_unmarkText;
-(void)_setGestureRecognizers;
-(unsigned)_characterBeforeCaretSelection;
-(unsigned)_characterInRelationToRangedSelection:(int)arg1 ;
-(void)_moveCurrentSelection:(int)arg1 ;
-(void)_expandSelectionToBackwardDeletionCluster;
-(void)_deleteBackwardAndNotify:(BOOL)arg1 ;
-(void)_deleteForwardAndNotify:(BOOL)arg1 ;
-(unsigned)_characterInRelationToCaretSelection:(int)arg1 ;
-(id)_wordContainingCaretSelection;
-(unsigned)_characterAfterCaretSelection;
-(id)_rangeOfEnclosingWord:(id)arg1 ;
-(id)_positionAtStartOfWords:(unsigned long long)arg1 beforePosition:(id)arg2 ;
-(id)_fullText;
-(id)_rangeOfText:(id)arg1 endingAtPosition:(id)arg2 ;
-(void)_replaceCurrentWordWithText:(id)arg1 ;
-(void)_selectAll;
-(BOOL)_selectionAtDocumentStart;
-(NSRange)_nsrangeForTextRange:(id)arg1 ;
-(BOOL)_shouldPerformUICalloutBarButtonReplaceAction:(SEL)arg1 forText:(id)arg2 checkAutocorrection:(BOOL)arg3 ;
-(BOOL)_selectionAtDocumentEnd;
-(id)_positionFromPosition:(id)arg1 inDirection:(long long)arg2 offset:(long long)arg3 withAffinityDownstream:(BOOL)arg4 ;
-(void)_scrollRectToVisible:(CGRect)arg1 animated:(BOOL)arg2 ;
-(long long)_selectionAffinity;
-(id)_positionWithinRange:(id)arg1 farthestInDirection:(long long)arg2 ;
-(id)_positionFromPosition:(id)arg1 pastTextUnit:(long long)arg2 inDirection:(long long)arg3 ;
-(id)_rangeSpanningTextUnit:(long long)arg1 andPosition:(id)arg2 ;
-(unsigned)_characterInRelationToPosition:(id)arg1 amount:(int)arg2 ;
-(id)_rangeOfTextUnit:(long long)arg1 enclosingPosition:(id)arg2 ;
-(id)_fontForCaretSelection;
-(id)_textColorForCaretSelection;
-(NSRange)_selectedRangeWithinMarkedText;
-(id)_newPhraseBoundaryGestureRecognizer;
-(BOOL)_usesAsynchronousProtocol;
-(BOOL)_hasMarkedText;
-(id)_selectableText;
-(id)_fullRange;
-(int)_indexForTextPosition:(id)arg1 ;
-(id)_clampedpositionFromPosition:(id)arg1 offset:(int)arg2 ;
-(long long)_opposingDirectionFromDirection:(long long)arg1 ;
-(id)_keyInput;
-(void)_setSelectedTextRange:(id)arg1 withAffinityDownstream:(BOOL)arg2 ;
-(void)_updateSelectionWithTextRange:(id)arg1 withAffinityDownstream:(BOOL)arg2 ;
-(BOOL)_isEmptySelection;
-(id)_setHistory:(id)arg1 withExtending:(BOOL)arg2 withAnchor:(int)arg3 withAffinityDownstream:(BOOL)arg4 ;
-(id)_setSelectionRangeWithHistory:(id)arg1 ;
-(void)_phraseBoundaryGesture:(id)arg1 ;
-(BOOL)_selectionAtWordStart;
-(BOOL)_hasMarkedTextOrRangedSelection;
-(void)_expandSelectionToStartOfWordBeforeCaretSelection;
-(id)_rangeOfLineEnclosingPosition:(id)arg1 ;
-(id)_rangeOfSentenceEnclosingPosition:(id)arg1 ;
-(id)_rangeOfParagraphEnclosingPosition:(id)arg1 ;
-(id)_findPleasingWordBoundaryFromPosition:(id)arg1 ;
-(id)webFrame;
-(CGRect)boundingRect;
-(CGRect)boundingRectAndInsideFixedPosition:(int*)arg1 ;
-(id)asDomNode;
-(BOOL)selectable;
-(id)parentBlock;
-(BOOL)canShrinkDirectlyToTextOnly;
-(id)enclosingDocument;
-(id)asDomRange;
-(BOOL)hasCustomLineHeight;
-(id)rangeOfContents;
-(BOOL)isSameBlock:(id)arg1 ;
-(BOOL)containsBlock:(id)arg1 ;
-(id)firstDescendantOfAboutTheSameWidthOrHeight;
-(id)lastDescendantOfAboutTheSameWidthOrHeight;
-(BOOL)strictlyContainsBlock:(id)arg1 ;
-(id)largerParent;
-(BOOL)rendersAsBlock;
-(BOOL)containsRange:(id)arg1 ;
-(BOOL)containsNode:(id)arg1 ;
-(id)asElement;
-(id)firstDescendantOfAboutTheSameWidthOrHeightAsRect:(CGRect)arg1 withDescentDirection:(int)arg2 ;
-(BOOL)strictlyContainsNode:(id)arg1 ;
-(id)enclosingElementIncludingSelf;
-(id)absoluteQuadsAtPoint:(CGPoint)arg1 ;
-(id)tapHighlightColor;
-(BOOL)touchCalloutEnabled;
-(BOOL)alwaysAttemptToShowTapHighlight;
-(BOOL)showsTapHighlight;
-(BOOL)nodeCanBecomeFirstResponder;
-(BOOL)isLikelyToBeginPageLoad;
-(id)_realNode;
-(id)itemTitle;
-(id)createSelectedItem;
-(id)createPickerCell;
-(void)populateCell:(id)arg1 ;
-(id)delegate;
-(id)content;
-(BOOL)isEditable;
-(id)text;
-(void)setText:(id)arg1 ;
-(void)setSecure:(BOOL)arg1 ;
-(id)textInRange:(id)arg1 ;
-(void)replaceRange:(id)arg1 withText:(id)arg2 ;
-(void)setMarkedText:(id)arg1 selectedRange:(NSRange)arg2 ;
-(void)unmarkText;
-(id)textRangeFromPosition:(id)arg1 toPosition:(id)arg2 ;
-(id)positionFromPosition:(id)arg1 offset:(long long)arg2 ;
-(id)positionFromPosition:(id)arg1 inDirection:(long long)arg2 offset:(long long)arg3 ;
-(long long)comparePosition:(id)arg1 toPosition:(id)arg2 ;
-(long long)offsetFromPosition:(id)arg1 toPosition:(id)arg2 ;
-(id)positionWithinRange:(id)arg1 farthestInDirection:(long long)arg2 ;
-(id)characterRangeByExtendingPosition:(id)arg1 inDirection:(long long)arg2 ;
-(long long)baseWritingDirectionForPosition:(id)arg1 inDirection:(long long)arg2 ;
-(void)setBaseWritingDirection:(long long)arg1 forRange:(id)arg2 ;
-(CGRect)firstRectForRange:(id)arg1 ;
-(CGRect)caretRectForPosition:(id)arg1 ;
-(id)selectionRectsForRange:(id)arg1 ;
-(id)closestPositionToPoint:(CGPoint)arg1 ;
-(id)closestPositionToPoint:(CGPoint)arg1 withinRange:(id)arg2 ;
-(id)characterRangeAtPoint:(CGPoint)arg1 ;
-(CGRect)frameForDictationResultPlaceholder:(id)arg1 ;
-(void)removeDictationResultPlaceholder:(id)arg1 willInsertResult:(BOOL)arg2 ;
-(void)beginFloatingCursorAtPoint:(CGPoint)arg1 ;
-(void)updateFloatingCursorAtPoint:(CGPoint)arg1 ;
-(void)endFloatingCursor;
-(UITextRange *)selectedTextRange;
-(void)setSelectedTextRange:(UITextRange *)arg1 ;
-(UITextRange *)markedTextRange;
-(NSDictionary *)markedTextStyle;
-(void)setMarkedTextStyle:(NSDictionary *)arg1 ;
-(UITextPosition *)beginningOfDocument;
-(UITextPosition *)endOfDocument;
-(id<UITextInputDelegate>)inputDelegate;
-(void)setInputDelegate:(id<UITextInputDelegate>)arg1 ;
-(id<UITextInputTokenizer>)tokenizer;
-(long long)selectionAffinity;
-(void)setSelectionAffinity:(long long)arg1 ;
-(id)insertDictationResultPlaceholder;
-(void)insertText:(id)arg1 ;
-(void)deleteBackward;
-(BOOL)hasText;
-(long long)returnKeyType;
-(void)setReturnKeyType:(long long)arg1 ;
-(BOOL)editing;
-(BOOL)isEditing;
-(UITextInteractionAssistant *)interactionAssistant;
-(id)selectionView;
-(id)textInputTraits;
-(void)setSelectionWithPoint:(CGPoint)arg1 ;
-(void)takeTraitsFrom:(id)arg1 ;
-(void)replaceRangeWithTextWithoutClosingTyping:(id)arg1 replacementText:(id)arg2 ;
-(void)insertDictationResult:(id)arg1 withCorrectionIdentifier:(id)arg2 ;
-(id)metadataDictionariesForDictationResults;
-(void)beginSelectionChange;
-(void)endSelectionChange;
-(void)selectAll;
-(UIView*<UITextInputPrivate>)_textSelectingContainer;
-(id)textColorForCaretSelection;
-(void)updateAutoscroll:(id)arg1 ;
-(NSRange)selectionRange;
-(BOOL)hasSelection;
-(CFCharacterSetRef)textTrimmingSet;
-(BOOL)hasContent;
-(CGPoint)constrainedPoint:(CGPoint)arg1 ;
-(void)updateSelection;
-(BOOL)becomesEditableWithGestures;
-(void)setBecomesEditableWithGestures:(BOOL)arg1 ;
-(id)automaticallySelectedOverlay;
-(BOOL)requiresKeyEvents;
-(void)handleKeyWebEvent:(id)arg1 ;
-(void)acceptedAutoFillWord:(id)arg1 ;
-(BOOL)isAutoFillMode;
-(id)fontForCaretSelection;
-(id)rangeEnclosingPosition:(id)arg1 withGranularity:(long long)arg2 inDirection:(long long)arg3 ;
-(BOOL)isPosition:(id)arg1 atBoundary:(long long)arg2 inDirection:(long long)arg3 ;
-(id)positionFromPosition:(id)arg1 toBoundary:(long long)arg2 inDirection:(long long)arg3 ;
-(BOOL)isPosition:(id)arg1 withinTextUnit:(long long)arg2 inDirection:(long long)arg3 ;
-(void)setTextTrimmingSet:(CFCharacterSetRef)arg1 ;
-(int)textLoupeVisibility;
-(void)setTextLoupeVisibility:(int)arg1 ;
-(id)textSuggestionDelegate;
-(void)setTextSuggestionDelegate:(id)arg1 ;
-(BOOL)contentsIsSingleValue;
-(void)setContentsIsSingleValue:(BOOL)arg1 ;
-(CGRect)_lastRectForRange:(id)arg1 ;
-(CGRect)caretRect;
-(void)replaceCurrentWordWithText:(id)arg1 ;
-(void)confirmMarkedText:(id)arg1 ;
-(unsigned short)characterInRelationToCaretSelection:(int)arg1 ;
-(unsigned short)characterAfterCaretSelection;
-(id)rectsForNSRange:(NSRange)arg1 ;
-(int)wordOffsetInRange:(id)arg1 ;
-(int)selectionState;
-(BOOL)selectionAtDocumentStart;
-(BOOL)selectionAtWordStart;
-(id)rangeByMovingCurrentSelection:(int)arg1 ;
-(id)rangeByExtendingCurrentSelection:(int)arg1 ;
-(void)extendCurrentSelection:(int)arg1 ;
-(CGRect)convertCaretRect:(CGRect)arg1 ;
-(BOOL)isShowingPlaceholder;
-(void)setupPlaceholderTextIfNeeded;
-(void)clearMarkedText;
-(void)setSelectedTextRange:(id)arg1 withAffinityDownstream:(BOOL)arg2 ;
-(id)rangeOfEnclosingWord:(id)arg1 ;
-(id)uiWebDocumentView;
-(CGPoint)constrainedPoint:(CGPoint)arg1 withInset:(double)arg2 ;
-(void)setSelectionWithPoint:(CGPoint)arg1 inset:(double)arg2 ;
-(void)replaceRange:(id)arg1 withText:(id)arg2 closeTyping:(BOOL)arg3 ;
-(int)initialSelectionBehavior;
-(void)setInitialSelectionBehavior:(int)arg1 ;
-(void)moveRight;
-(void)moveLeft;
-(void)moveUp;
-(void)moveDown;
-(BOOL)editable;
-(id)textDocument;
-(CGRect)convertRect:(CGRect)arg1 toView:(id)arg2 ;
-(BOOL)isSecure;
-(long long)keyboardType;
-(BOOL)isTextControl;
-(id)tagName;
-(id)urlScheme;
-(id)createPeripheral;
-(id)startPosition;
-(id)endPosition;
-(id)rangeOfContents;
-(CGRect)_renderRect:(BOOL*)arg1 ;
-(id)markupString;
-(id)webArchiveByFilteringSubframes:(/*^block*/id)arg1 ;
-(void)hidePlaceholder;
-(void)showPlaceholderIfNecessary;
-(BOOL)isHorizontalWritingMode;
-(WebArchive *)webArchive;
-(NSString *)nodeValue;
-(Element*)_linkElement;
-(id)lineBoxRects;
-(id)lineBoxQuads;
-(id)hrefTarget;
-(CGRect)hrefFrame;
-(id)hrefLabel;
-(id)hrefTitle;
-(CGRect)boundingFrame;
-(id)lookupNamespaceURI:(id)arg1 ;
-(void)addEventListener:(id)arg1 listener:(id)arg2 useCapture:(BOOL)arg3 ;
-(void)removeEventListener:(id)arg1 listener:(id)arg2 useCapture:(BOOL)arg3 ;
-(BOOL)dispatchEvent:(id)arg1 ;
-(void)addEventListener:(id)arg1 :(id)arg2 :(BOOL)arg3 ;
-(void)removeEventListener:(id)arg1 :(id)arg2 :(BOOL)arg3 ;
-(void)setNodeValue:(NSString *)arg1 ;
-(NSString *)baseURI;
-(id)insertBefore:(id)arg1 :(id)arg2 ;
-(id)replaceChild:(id)arg1 :(id)arg2 ;
-(BOOL)isSupported:(id)arg1 version:(id)arg2 ;
-(BOOL)isSupported:(id)arg1 :(id)arg2 ;
-(id)lookupPrefix:(id)arg1 ;
-(BOOL)isDefaultNamespace:(id)arg1 ;
-(unsigned short)compareDocumentPosition:(id)arg1 ;
-(id)boundingBoxes;
-(void)dealloc;
-(NSString *)description;
-(DOMDocument *)ownerDocument;
-(DOMNodeList *)childNodes;
-(DOMNode *)lastChild;
-(DOMNode *)firstChild;
-(BOOL)isContentEditable;
-(DOMNode *)parentNode;
-(CGRect)boundingBoxUsingTransforms;
-(DOMNode *)previousSibling;
-(id)removeChild:(id)arg1 ;
-(WKQuad)innerFrameQuad;
-(CGRect)boundingBox;
-(void)getPreviewSnapshotImage:(CGImage*)arg1 andRects:(id*)arg2 ;
-(id)borderRadii;
-(BOOL)isSameNode:(id)arg1 ;
-(void)inspect;
-(WKQuad)absoluteQuad;
-(id)hrefURL;
-(DOMNamedNodeMap *)attributes;
-(id)absoluteQuads;
-(double)textHeight;
-(unsigned short)nodeType;
-(id)findExplodedTextNodeAtPoint:(CGPoint)arg1 ;
-(id)rangeOfContainingParagraph;
-(DOMElement *)parentElement;
-(BOOL)isSelectableBlock;
-(BOOL)containsOnlyInlineObjects;
-(WKQuad)absoluteQuadAndInsideFixedPosition:(BOOL*)arg1 ;
-(DOMNode *)nextSibling;
-(id)nextFocusNode;
-(id)previousFocusNode;
-(float)computedFontSize;
-(NSString *)prefix;
-(void)setPrefix:(NSString *)arg1 ;
-(BOOL)hasAttributes;
-(BOOL)contains:(id)arg1 ;
-(BOOL)isConnected;
-(id)textRects;
-(NSString *)localName;
-(id)replaceChild:(id)arg1 oldChild:(id)arg2 ;
-(id)appendChild:(id)arg1 ;
-(id)insertBefore:(id)arg1 refChild:(id)arg2 ;
-(BOOL)isEqualNode:(id)arg1 ;
-(id)cloneNode:(BOOL)arg1 ;
-(BOOL)hasChildNodes;
-(RootObjectRef)_rootObject;
-(NSString *)namespaceURI;
-(NSString *)textContent;
-(NSString *)nodeName;
-(void)setTextContent:(NSString *)arg1 ;
-(void)normalize;
@end

