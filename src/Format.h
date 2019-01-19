#ifndef FORMAT_H_
#define FORMAT_H_


class Format {
    public:
        //void printInfo(uint rs1, uint rs2, uint rs3); // Print the current status of the rotors formatted
        struct Token parseExpression(char* expr); // Parse the raw input and generate token
    private:
        const char DELIMITER = '>';
        bool emptyExpr(char* expr);
};
#endif  // FORMAT_H_