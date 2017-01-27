/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:46 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Home/HFItemProvider.h>

@class NSSet;

@interface HFStaticItemProvider : HFItemProvider {

	BOOL _hasProvidedItems;
	NSSet* _staticItems;

}

@property (nonatomic,retain) NSSet * staticItems;                //@synthesize staticItems=_staticItems - In the implementation block
@property (assign,nonatomic) BOOL hasProvidedItems;              //@synthesize hasProvidedItems=_hasProvidedItems - In the implementation block
-(id)items;
-(void)setStaticItems:(NSSet *)arg1 ;
-(NSSet *)staticItems;
-(id)initWithHome:(id)arg1 ;
-(BOOL)hasProvidedItems;
-(void)setHasProvidedItems:(BOOL)arg1 ;
-(id)initWithHome:(id)arg1 items:(id)arg2 ;
-(id)invalidationReasons;
-(id)reloadItems;
@end

