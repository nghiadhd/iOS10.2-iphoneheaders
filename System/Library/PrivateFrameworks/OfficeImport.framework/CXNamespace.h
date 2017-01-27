/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:21 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <OfficeImport/OfficeImport-Structs.h>
@interface CXNamespace : NSObject {

	const char* mUri;
	xmlDoc* mDocument;
	xmlNs* mDocumentNamespace;
	CXNamespace* mFallbackNamespace;

}

@property (nonatomic,retain) CXNamespace * fallbackNamespace; 
+(void)registerNamespace:(id)arg1 ;
+(BOOL)isNamespaceSupported:(const char*)arg1 ;
+(BOOL)isPrefixSupportedFromNodeContext:(xmlNode*)arg1 prefix:(const char*)arg2 ;
+(BOOL)isPrefixSupportedFromStream:(xmlTextReaderRef)arg1 prefix:(const char*)arg2 ;
+(void)clearRegisteredNamespaces;
-(id)init;
-(void)dealloc;
-(BOOL)containsNode:(xmlNode*)arg1 ;
-(BOOL)containsAttribute:(xmlAttr*)arg1 ;
-(const char*)uri;
-(CXNamespace *)fallbackNamespace;
-(id)initUnsupportedNsWithUri:(const char*)arg1 ;
-(id)initWithUri:(const char*)arg1 ;
-(const char*)fallbackUri;
-(id)initWithUri:(const char*)arg1 fallbackNamespace:(id)arg2 ;
-(void)setFallbackNamespace:(CXNamespace *)arg1 ;
@end
