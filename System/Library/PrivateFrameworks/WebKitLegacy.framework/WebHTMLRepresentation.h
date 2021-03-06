/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:24 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/WebKitLegacy.framework/WebKitLegacy
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WebKitLegacy/WebDocumentRepresentation.h>
#import <WebKitLegacy/WebDocumentDOM.h>

@class WebHTMLRepresentationPrivate, NSString;

@interface WebHTMLRepresentation : NSObject <WebDocumentRepresentation, WebDocumentDOM> {

	WebHTMLRepresentationPrivate* _private;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)supportedNonImageMIMETypes;
+(id)supportedMediaMIMETypes;
+(id)supportedMIMETypes;
+(id)supportedImageMIMETypes;
+(id)unsupportedTextMIMETypes;
-(void)finishedLoadingWithDataSource:(id)arg1 ;
-(void)receivedData:(id)arg1 withDataSource:(id)arg2 ;
-(void)receivedError:(id)arg1 withDataSource:(id)arg2 ;
-(void)_redirectDataToManualLoader:(id)arg1 forPluginView:(id)arg2 ;
-(BOOL)_isDisplayingWebArchive;
-(id)searchForLabels:(id)arg1 beforeElement:(id)arg2 resultDistance:(unsigned long long*)arg3 resultIsInCellAbove:(BOOL*)arg4 ;
-(BOOL)canProvideDocumentSource;
-(id)documentSource;
-(BOOL)canSaveAsWebArchive;
-(id)elementWithName:(id)arg1 inForm:(id)arg2 ;
-(BOOL)elementDoesAutoComplete:(id)arg1 ;
-(BOOL)elementIsPassword:(id)arg1 ;
-(id)formForElement:(id)arg1 ;
-(id)currentForm;
-(id)controlsInForm:(id)arg1 ;
-(id)searchForLabels:(id)arg1 beforeElement:(id)arg2 ;
-(id)matchLabels:(id)arg1 againstElement:(id)arg2 ;
-(id)init;
-(void)setDataSource:(id)arg1 ;
-(void)dealloc;
-(id)title;
-(id)DOMDocument;
@end

