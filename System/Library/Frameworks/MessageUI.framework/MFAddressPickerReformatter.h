/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:05 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/MessageUI.framework/MessageUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray;

@interface MFAddressPickerReformatter : NSObject {

	NSArray* _addresses;
	NSArray* _reformattedAddresses;
	double _maximumWidth;
	double _minimumFontSize;
	double _maximumFontSize;
	double _fontSize;
	BOOL _attributesDisabled;

}
-(void)dealloc;
-(void)setMaximumWidth:(double)arg1 ;
-(void)setFontSize:(double)arg1 ;
-(void)setMinimumFontSize:(double)arg1 maximumFontSize:(double)arg2 ;
-(unsigned long long)numberOfReformattedAddresses;
-(id)reformattedAddressAtIndex:(unsigned long long)arg1 ;
-(void)_invalidateReformattedAddresses;
-(void)_updateReformattedAddressesIfNecessary;
-(unsigned long long)_defaultOptions;
-(void)_determineFontSize:(BOOL*)arg1 ;
-(void)_truncateIdenticalLocalPartsWithDifferentDomainParts;
-(void)_attemptUniquingDisplayedStrings;
-(void)_truncateIdenticalLocalPartsWithDifferentDomainPartsWithTailLength:(unsigned long long)arg1 options:(unsigned long long)arg2 ;
-(BOOL)_attemptUniquingDisplayedStringsUsingBlock:(/*^block*/id)arg1 ;
-(void)_expandAllLocalParts;
-(id)_reformattedAddressesByDisplayedStrings;
-(BOOL)_reformattedAddressesByDisplayedStringsAreUnique:(id)arg1 ;
-(id)_saveMiddleTruncationRanges;
-(void)_restoreMiddleTruncationRanges:(id)arg1 ;
-(void)setAttributesDisabled:(BOOL)arg1 ;
-(id)reformattedAddressStringAtIndex:(unsigned long long)arg1 ;
-(void)setAddresses:(id)arg1 ;
@end

