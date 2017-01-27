/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:32 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSArray, TSCEFunctionSpec;

@interface TSCEFunctionArgumentSpec : NSObject <NSCopying> {

	int mArgumentType;
	BOOL mForceArrayMode;
	double mMinValue;
	double mMaxValue;
	BOOL mDisallowDuration;
	BOOL mDisallowCurrency;
	short mIndex;
	int mAccessorMode;
	int mArgumentContext;
	unsigned char mRangeContext;
	NSArray* mDisallowedTypes;
	vector<TSCEValue, std::__1::allocator<TSCEValue> >* mModeValues;
	short mDefaultModeIndex;
	TSCEFunctionSpec* mFunctionSpec;
	BOOL mMinInclusive;
	BOOL mMaxInclusive;
	BOOL mIsInteger;
	BOOL mReferenceForGeometryOnly;

}

@property (nonatomic,readonly) vector<TSCEValue* modeValues; 
@property (assign,nonatomic) TSCEFunctionSpec * functionSpec; 
@property (nonatomic,readonly) int accessorMode; 
@property (nonatomic,readonly) NSArray * disallowedTypes; 
@property (nonatomic,readonly) int argumentContext; 
@property (assign,nonatomic) unsigned char rangeContext; 
@property (nonatomic,readonly) short index; 
@property (nonatomic,readonly) double minValue; 
@property (nonatomic,readonly) BOOL minInclusive; 
@property (nonatomic,readonly) double maxValue; 
@property (nonatomic,readonly) BOOL maxInclusive; 
@property (nonatomic,readonly) BOOL isInteger; 
@property (nonatomic,readonly) BOOL disallowDuration; 
@property (nonatomic,readonly) BOOL disallowCurrency; 
@property (nonatomic,readonly) BOOL isOptional; 
@property (nonatomic,readonly) BOOL referenceForGeometryOnly; 
@property (nonatomic,readonly) BOOL isMode; 
@property (nonatomic,readonly) short numModes; 
@property (nonatomic,readonly) short defaultModeIndex; 
@property (nonatomic,readonly) BOOL forceArrayMode; 
+(id)argumentSpecWithIndex:(short)arg1 type:(int)arg2 accessorMode:(int)arg3 disallowedTypes:(id)arg4 argumentContext:(int)arg5 rangeContext:(unsigned char)arg6 minValue:(double)arg7 minInclusive:(BOOL)arg8 maxValue:(double)arg9 maxInclusive:(BOOL)arg10 isInteger:(BOOL)arg11 disallowDuration:(BOOL)arg12 disallowCurrency:(BOOL)arg13 modeValues:(vector<TSCEValue, std::__1::allocator<TSCEValue> >*)arg14 defaultModeIndex:(short)arg15 referenceForGeometryOnly:(BOOL)arg16 forceArrayMode:(BOOL)arg17 ;
-(int)accessorMode;
-(int)preferredType;
-(int)argumentContext;
-(BOOL)disallowCurrency;
-(BOOL)disallowDuration;
-(void)setFunctionSpec:(TSCEFunctionSpec *)arg1 ;
-(id)localizedFunctionNameForLocale:(id)arg1 ;
-(NSArray *)disallowedTypes;
-(unsigned char)rangeContext;
-(BOOL)minInclusive;
-(BOOL)maxInclusive;
-(vector<TSCEValue*)modeValues;
-(short)defaultModeIndex;
-(BOOL)referenceForGeometryOnly;
-(BOOL)forceArrayMode;
-(id)initArgumentSpecWithIndex:(short)arg1 type:(int)arg2 accessorMode:(int)arg3 disallowedTypes:(id)arg4 argumentContext:(int)arg5 rangeContext:(unsigned char)arg6 minValue:(double)arg7 minInclusive:(BOOL)arg8 maxValue:(double)arg9 maxInclusive:(BOOL)arg10 isInteger:(BOOL)arg11 disallowDuration:(BOOL)arg12 disallowCurrency:(BOOL)arg13 modeValues:(vector<TSCEValue, std::__1::allocator<TSCEValue> >*)arg14 defaultModeIndex:(short)arg15 referenceForGeometryOnly:(BOOL)arg16 forceArrayMode:(BOOL)arg17 ;
-(id)nativeSyntaxString;
-(id)localizedToolTipStringForLocale:(id)arg1 ;
-(BOOL)isMode;
-(short)numModes;
-(long long)indexForModeValue:(TSCEValue*)arg1 locale:(id)arg2 ;
-(id)localizedModeNameForModeIndex:(short)arg1 locale:(id)arg2 ;
-(TSCEValue)valueForModeIndex:(short)arg1 ;
-(id)localizedArgumentNameForLocale:(id)arg1 ;
-(long long)indexForModeString:(id)arg1 locale:(id)arg2 ;
-(long long)indexForModeNumber:(double)arg1 locale:(id)arg2 ;
-(long long)indexForModeBool:(BOOL)arg1 locale:(id)arg2 ;
-(id)nativeSyntaxStringForModeIndex:(short)arg1 ;
-(id)localizedModeNamesForLocale:(id)arg1 ;
-(id)localizedModeToolTipStringForModeIndex:(short)arg1 locale:(id)arg2 ;
-(id)localizedModeMenuItemStringForModeIndex:(short)arg1 locale:(id)arg2 ;
-(BOOL)typeIsDisallowed:(int)arg1 value:(TSCEValue*)arg2 ;
-(void)setRangeContext:(unsigned char)arg1 ;
-(TSCEFunctionSpec *)functionSpec;
-(BOOL)isOptional;
-(void)dealloc;
-(id)copyWithZone:(NSZone*)arg1 ;
-(double)minValue;
-(short)index;
-(BOOL)isInteger;
-(double)maxValue;
@end

