/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:06 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <StoreKitUI/StoreKitUI-Structs.h>
@class NSMutableArray, NSArray;

@interface SKUITabularLockupColumn : NSObject {

	NSMutableArray* _childViewElements;
	long long _identifier;
	CGSize _size;

}

@property (assign,nonatomic) long long identifier;                            //@synthesize identifier=_identifier - In the implementation block
@property (assign,nonatomic) CGSize size;                                     //@synthesize size=_size - In the implementation block
@property (nonatomic,copy,readonly) NSArray * childViewElements;              //@synthesize childViewElements=_childViewElements - In the implementation block
-(CGSize)size;
-(id)description;
-(long long)identifier;
-(void)setSize:(CGSize)arg1 ;
-(void)setIdentifier:(long long)arg1 ;
-(NSArray *)childViewElements;
-(void)_addChildViewElement:(id)arg1 ;
-(id)initWithColumnIdentifier:(long long)arg1 ;
@end

