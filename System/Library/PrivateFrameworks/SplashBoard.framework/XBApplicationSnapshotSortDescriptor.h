/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:00 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/SplashBoard.framework/SplashBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/BSDescriptionProviding.h>

@class NSSortDescriptor, NSString;

@interface XBApplicationSnapshotSortDescriptor : NSObject <BSDescriptionProviding> {

	unsigned long long _key;
	BOOL _ascending;
	/*^block*/id _comparator;

}

@property (assign,nonatomic) unsigned long long key;                                    //@synthesize key=_key - In the implementation block
@property (assign,nonatomic) BOOL ascending;                                            //@synthesize ascending=_ascending - In the implementation block
@property (nonatomic,copy) id comparator;                                               //@synthesize comparator=_comparator - In the implementation block
@property (nonatomic,retain,readonly) NSSortDescriptor * NSSortDescriptor; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sortDescriptorWithKey:(unsigned long long)arg1 ascending:(BOOL)arg2 comparator:(/*^block*/id)arg3 ;
+(id)_propertyKeyForSnapshotKey:(unsigned long long)arg1 overriddenForNil:(BOOL*)arg2 ;
-(id)comparator;
-(void)dealloc;
-(NSString *)description;
-(unsigned long long)key;
-(void)setKey:(unsigned long long)arg1 ;
-(id)_stringForKey:(unsigned long long)arg1 ;
-(void)setAscending:(BOOL)arg1 ;
-(void)setComparator:(id)arg1 ;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(BOOL)ascending;
-(id)initWithKey:(unsigned long long)arg1 ascending:(BOOL)arg2 comparator:(/*^block*/id)arg3 ;
-(NSSortDescriptor *)NSSortDescriptor;
@end

