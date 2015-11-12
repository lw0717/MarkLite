//
// Created by azu on 2013/10/26.
//


#import <Foundation/Foundation.h>

typedef NS_ENUM(NSUInteger, MarkdownSyntaxType){
    MarkdownSyntaxUnknown,
    MarkdownSyntaxHeaders,
    MarkdownSyntaxLinks,
    MarkdownSyntaxImages,
    MarkdownSyntaxBold,
    MarkdownSyntaxEmphasis,
    MarkdownSyntaxDeletions,
    MarkdownSyntaxQuotes,
    MarkdownSyntaxCodeBlock,
    MarkdownSyntaxImplicitCodeBlock,
    MarkdownSyntaxBlockquotes,
    MarkdownSyntaxSeparate,
    MarkdownSyntaxULLists,
    MarkdownSyntaxOLLists,
    MarkdownSyntaxInlineCode,
    MarkdownSyntaxTitle,
    MarkdownSyntaxLable,
    NumberOfMarkdownSyntax,
};

@interface MarkdownSyntaxModel : NSObject
@property(nonatomic) NSRange range;
@property(nonatomic) MarkdownSyntaxType type;

- (instancetype)initWithType:(enum MarkdownSyntaxType) type range:(NSRange) range;

+ (instancetype)modelWithType:(enum MarkdownSyntaxType) type range:(NSRange) range;

@end