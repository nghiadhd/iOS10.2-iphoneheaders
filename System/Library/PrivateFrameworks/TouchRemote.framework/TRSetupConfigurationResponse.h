/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:13 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/TouchRemote.framework/TouchRemote
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TouchRemote/TRResponseMessage.h>

@class NSSet;

@interface TRSetupConfigurationResponse : TRResponseMessage {

	BOOL _needsNetwork;
	NSSet* _unauthenticatedAccountServices;

}

@property (assign,nonatomic) BOOL needsNetwork;                                 //@synthesize needsNetwork=_needsNetwork - In the implementation block
@property (nonatomic,copy) NSSet * unauthenticatedAccountServices;              //@synthesize unauthenticatedAccountServices=_unauthenticatedAccountServices - In the implementation block
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(NSSet *)unauthenticatedAccountServices;
-(void)setUnauthenticatedAccountServices:(NSSet *)arg1 ;
-(BOOL)needsNetwork;
-(id)_stringFromAccountServices:(id)arg1 ;
-(void)setNeedsNetwork:(BOOL)arg1 ;
@end

