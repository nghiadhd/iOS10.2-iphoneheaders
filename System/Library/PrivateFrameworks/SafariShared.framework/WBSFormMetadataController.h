/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:49 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <SafariShared/SafariShared-Structs.h>
@interface WBSFormMetadataController : NSObject {

	HashMap<OpaqueFormAutoFillFrame *, std::__1::unique_ptr<SafariShared::FrameMetadata, std::__1::default_delete<SafariShared::FrameMetadata> >, WTF::PtrHash<OpaqueFormAutoFillFrame *>, WTF::HashTraits<OpaqueFormAutoFillFrame *>, WTF::HashTraits<std::__1::unique_ptr<SafariShared::FrameMetadata, std::__1::default_delete<SafariShared::FrameMetadata> > > >* _framesToMetadataMap;

}
+(BOOL)convertNumber:(id)arg1 toFormMetadataRequestType:(unsigned long long*)arg2 ;
-(id)init;
-(id)formAutoFillNodeForJSWrapper:(OpaqueJSValueRef)arg1 inContext:(OpaqueJSContextRef)arg2 ;
-(void)autoFillFormSynchronouslyInFrame:(id)arg1 withValues:(id)arg2 ;
-(void)autoFillFormInFrame:(id)arg1 withValues:(id)arg2 fillSynchronously:(BOOL)arg3 setAutoFilled:(BOOL)arg4 selectFieldAfterFilling:(id)arg5 ;
-(void)autoFillFormInFrame:(id)arg1 withValues:(id)arg2 fillSynchronously:(BOOL)arg3 setAutoFilled:(BOOL)arg4 focusFieldAfterFilling:(BOOL)arg5 fieldToFocus:(id)arg6 ;
-(BOOL)isFrameAnnotated:(id)arg1 ;
-(BOOL)isFrameOrChildAnnotated:(id)arg1 ;
-(void)clearScriptWorld;
-(void)recursivelyClearMetadataForFrames:(id)arg1 ;
-(void)clearMetadataForFrame:(id)arg1 ;
-(FrameMetadata*)metadataForFrame:(id)arg1 requestType:(unsigned long long)arg2 ;
-(void)recursivelyCollectMetadataInFrame:(id)arg1 requestType:(unsigned long long)arg2 frames:(id)arg3 formMetadata:(id)arg4 ;
-(OpaqueJSValueRef)_jsObjectForForm:(id)arg1 inFrame:(id)arg2 ;
-(void)_unlockMetadataForForm:(id)arg1 inFrame:(id)arg2 ;
-(unsigned long long)userEditedTextControlCountInArray:(OpaqueJSValueRef)arg1 context:(OpaqueJSContextRef)arg2 expectTextFieldsRatherThanTextAreas:(BOOL)arg3 ;
-(void)countUserEditedTextControlsInFrame:(id)arg1 textFields:(unsigned long long*)arg2 textAreas:(unsigned long long*)arg3 ;
-(void)recursivelyCountUserEditedTextControlsInFrame:(id)arg1 textFields:(unsigned long long*)arg2 textAreas:(unsigned long long*)arg3 ;
-(void)passwordFieldFocused:(id)arg1 inFrame:(id)arg2 ;
-(void)getMetadataForTextField:(id)arg1 inFrame:(id)arg2 textFieldMetadata:(id*)arg3 formMetadata:(id*)arg4 requestType:(unsigned long long)arg5 ;
-(void)passwordFieldFocused:(id)arg1 inFrame:(id)arg2 isPasswordFieldForUserCredentials:(BOOL)arg3 ;
-(void)creditCardFieldFocused:(id)arg1 inFrame:(id)arg2 ;
-(void)usernameFieldFocused:(id)arg1 inForm:(id)arg2 inFrame:(id)arg3 ;
-(void)getMetadataForAllFormsInPageWithMainFrame:(id)arg1 requestType:(unsigned long long)arg2 frames:(id*)arg3 formMetadata:(id*)arg4 ;
-(void)addressBookAutoFillableFieldFocused:(id)arg1 withAddressBookAutoFillableFieldMetadata:(id)arg2 inFrame:(id)arg3 ;
-(void)passwordFieldBlurred:(id)arg1 inFrame:(id)arg2 page:(id)arg3 textFieldMetadata:(id)arg4 formMetadata:(id)arg5 ;
-(void)creditCardFieldBlurred:(id)arg1 inFrame:(id)arg2 page:(id)arg3 textFieldMetadata:(id)arg4 formMetadata:(id)arg5 ;
-(void)usernameFieldBlurred:(id)arg1 inFrame:(id)arg2 page:(id)arg3 textFieldMetadata:(id)arg4 formMetadata:(id)arg5 ;
-(void)addressBookAutoFillableFieldBlurred:(id)arg1 inFrame:(id)arg2 page:(id)arg3 textFieldMetadata:(id)arg4 formMetadata:(id)arg5 ;
-(void)_lockMetadataForForm:(id)arg1 inFrame:(id)arg2 ;
-(void)annotateForm:(double)arg1 inFrame:(id)arg2 withValues:(id)arg3 ;
-(void)autoFillFormInFrame:(id)arg1 withValues:(id)arg2 ;
-(void)autoFillFormSynchronouslyInFrame:(id)arg1 withValues:(id)arg2 selectFieldAfterFilling:(id)arg3 ;
-(void)autoFillFormAsynchronouslyInFrame:(id)arg1 withValues:(id)arg2 selectFieldAfterFilling:(id)arg3 ;
-(void)finishedAutoFillingForm:(id)arg1 inFrame:(id)arg2 ;
-(void)setFormControls:(id)arg1 inFrame:(id)arg2 asAutoFilled:(BOOL)arg3 ;
-(void)fillForm:(double)arg1 inFrame:(id)arg2 withPassword:(id)arg3 ;
-(void)fillField:(id)arg1 inFrame:(id)arg2 withGeneratedPassword:(id)arg3 ;
-(void)clearField:(id)arg1 inFrame:(id)arg2 ;
-(void)focusField:(id)arg1 inFrame:(id)arg2 ;
-(void)disableSpellCheckInField:(id)arg1 inFrame:(id)arg2 ;
-(NSRange)selectionRangeInField:(id)arg1 inFrame:(id)arg2 ;
-(void)selectRange:(NSRange)arg1 inField:(id)arg2 inFrame:(id)arg3 ;
-(void)replaceRange:(NSRange)arg1 inField:(id)arg2 inFrame:(id)arg3 withString:(id)arg4 andSelectTailStartingAt:(unsigned long long)arg5 ;
-(id)metadataForForm:(id)arg1 inFrame:(id)arg2 requestType:(unsigned long long)arg3 ;
-(id)uniqueIDForTextField:(id)arg1 inFrame:(id)arg2 ;
-(BOOL)pageWithMainFrameMeetsEditedFormTextWarningCriteria:(id)arg1 ;
-(void)textFieldFocused:(id)arg1 inFrame:(id)arg2 ;
-(void)textFieldBlurred:(id)arg1 inFrame:(id)arg2 page:(id)arg3 textFieldMetadata:(id)arg4 formMetadata:(id)arg5 ;
-(void)willSendSubmitEventForForm:(id)arg1 inFrame:(id)arg2 ;
-(void)willSubmitForm:(id)arg1 inFrame:(id)arg2 ;
-(id)formElementWithFormID:(double)arg1 inFrame:(id)arg2 ;
-(id)formAutoFillNodeForField:(id)arg1 inFrame:(id)arg2 ;
-(id)formSubmissionURLStringForSearchTextField:(id)arg1 inFrame:(id)arg2 useStrictDetection:(BOOL)arg3 ;
-(id)visibleNonEmptyTextFieldsInForm:(id)arg1 inFrame:(id)arg2 ;
-(BOOL)shouldIncludeUnannotatedControls;
-(BOOL)shouldAttemptToClassifyFormsWithoutAPasswordFieldAsLoginForms;
@end
