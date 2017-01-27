/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:30 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <iWorkImport/iWorkImport-Structs.h>
@class GQDRoot;

@interface GQDSStylesheet : NSObject {

	GQDRoot* mRoot;
	GQDSStylesheet* mParent;
	CFDictionaryRef mIdentifiedStyles;
	CFArrayRef mStylesNeedingParentResolutionInParent;
	CFArrayRef mStylesNeedingParentResolution;

}
-(BOOL)addStyle:(id)arg1 withOwnedXmlUid:(char*)arg2 ;
-(id)styleWithIdentifier:(const char*)arg1 ;
-(id)initWithRoot:(id)arg1 ;
-(void)addStyle:(id)arg1 withOwnedIdentifier:(char*)arg2 ;
-(id)styleWithXmlUid:(const char*)arg1 ;
-(void)addStyle:(id)arg1 needingParentResolution:(const char*)arg2 resolveInParent:(BOOL)arg3 ;
-(void)resolveStyleParents;
-(CFArrayRef)retainedArrayOfIdentifiedStyles;
-(void)dealloc;
-(id)parent;
@end

