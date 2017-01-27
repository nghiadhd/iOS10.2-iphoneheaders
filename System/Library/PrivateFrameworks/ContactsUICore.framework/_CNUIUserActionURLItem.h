/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:15 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/ContactsUICore.framework/ContactsUICore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ContactsUICore/CNUIUserActionItem.h>

@class CNFuture;

@interface _CNUIUserActionURLItem : CNUIUserActionItem {

	CNFuture* _url;

}

@property (nonatomic,readonly) CNFuture * url;              //@synthesize url=_url - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(CNFuture *)url;
-(id)performActionWithContext:(id)arg1 ;
-(id)initWithType:(id)arg1 contactProperty:(id)arg2 bundleIdentifier:(id)arg3 url:(id)arg4 group:(long long)arg5 options:(unsigned long long)arg6 ;
@end

