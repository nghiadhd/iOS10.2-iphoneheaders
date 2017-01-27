/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:54:41 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/CallKit.framework/CallKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CallKit/CXCallSource.h>

@protocol NSCopying;
@class CXProviderExtensionHostContext, NSExtension;

@interface CXExtensionCallSource : CXCallSource {

	CXProviderExtensionHostContext* _extensionContext;
	NSExtension* _extension;
	id<NSCopying> _requestIdentifier;

}

@property (nonatomic,retain) NSExtension * extension;                                        //@synthesize extension=_extension - In the implementation block
@property (nonatomic,copy) id<NSCopying> requestIdentifier;                                  //@synthesize requestIdentifier=_requestIdentifier - In the implementation block
@property (nonatomic,retain) CXProviderExtensionHostContext * extensionContext;              //@synthesize extensionContext=_extensionContext - In the implementation block
-(id)init;
-(id)identifier;
-(CXProviderExtensionHostContext *)extensionContext;
-(id)bundle;
-(NSExtension *)extension;
-(void)setExtension:(NSExtension *)arg1 ;
-(id)displayName;
-(int)processIdentifier;
-(id)initWithExtensionIdentifier:(id)arg1 ;
-(id<NSCopying>)requestIdentifier;
-(void)setRequestIdentifier:(id<NSCopying>)arg1 ;
-(id)initWithExtension:(id)arg1 ;
-(id)vendorProtocolDelegate;
-(void)setExtensionContext:(CXProviderExtensionHostContext *)arg1 ;
-(void)beginWithCompletionHandler:(/*^block*/id)arg1 ;
@end

