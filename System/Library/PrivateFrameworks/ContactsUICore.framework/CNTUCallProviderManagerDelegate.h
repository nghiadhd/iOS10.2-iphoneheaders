/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:15 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/ContactsUICore.framework/ContactsUICore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/TUCallProviderManagerDelegate.h>

@class NSString;

@interface CNTUCallProviderManagerDelegate : NSObject <TUCallProviderManagerDelegate> {

	/*^block*/id _block;

}

@property (nonatomic,copy,readonly) id block;                       //@synthesize block=_block - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)providersChangedForProviderManager:(id)arg1 ;
-(id)initWithBlock:(/*^block*/id)arg1 ;
-(id)block;
@end

