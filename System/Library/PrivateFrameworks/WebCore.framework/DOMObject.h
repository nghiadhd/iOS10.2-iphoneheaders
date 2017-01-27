/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:23 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WebCore/WebCore-Structs.h>
#import <WebCore/WebScriptObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class DOMStyleSheet;

@interface DOMObject : WebScriptObject <NSCopying> {

	DOMObjectInternalRef _internal;

}

@property (readonly) DOMStyleSheet * sheet; 
-(oneway void)release;
-(oneway void)_webcore_releaseOnWebThread;
-(id)init;
-(void)dealloc;
-(id)copyWithZone:(NSZone*)arg1 ;
-(DOMStyleSheet *)sheet;
@end

